#!/usr/bin/env ruby
#
# A little helper script that can help you run test cases and look at the
# results.
#
# See ./test.rb --help for more info.
#
# Usage examples:
#
#   Run all tests in 2_Parser and they'll be logged to a file:
#
#     ./test.rb -c ../csci-e-95-stbenjam/src/compiler/compiler -d 2_Parser -s parser
#
#   Add "-p" option, which will show each test on stdout, and prompt you
#   whether to save it or not.
#
#     ./test.rb -c ../csci-e-95-stbenjam/src/compiler/compiler -d 2_Parser -s parser -p
#
require 'optparse'

options = {}

ARGV << '-h' if ARGV.empty?

REQUIRED = [:compiler, :dir, :stage]

OptionParser.new do |opts|
  opts.banner = "Usage: #{$0} [options]"

  opts.on("-c", "--compiler [PATH]", "Path to compiler binary") do |c|
    if File.file?(c)
      options[:compiler] = c
    else
      puts "File not found: #{c}"
      exit 1
    end
  end

  opts.on("-d", "--dir [DIR]", "Path to test case directory") do |d|
    if File.directory?(d)
      options[:dir] = d
    else
      puts "Directory not found: #{d}"
      exit 1
    end
  end

  opts.on("-s", "--stage [STAGE]", "Compiler stage") do |s|
    options[:stage] = s
  end

  opts.on("-p", "--prompt", "Whether to prompt to save tests") do |p|
    options[:prompt] = p
  end
end.parse!

if options[:compiler].nil? || !File.exist?(options[:compiler])
  puts "Please give path to valid compiler binary."
  exit 1
end

missing = []
REQUIRED.each { |r| missing << r if options[r].nil? }
if !missing.empty?
  puts "Missing required options: #{missing.join(", ")}"
  exit 1
end

saved = File.open("saved-#{Time.now.strftime('%Y-%m-%d_%H-%M-%S')}.log", 'w+')

def result(test, code, result)
  "---------------------------------------------------------------\n" + "Test
  case: #{test}\n" +
  "---------------------------------------------------------------\n" +
  "Code:\n" +
  "  " + code.gsub(/\n/, "\n  ") +
  "\n" +
  "Output:\n" +
  "  " + result.gsub(/\n/, "\n  ") +
  "\n"
end

count = 0

Dir["#{options[:dir]}/*.c"].each do |test|
  code    = File.read(test)
  output  = `#{options[:compiler]} -s #{options[:stage]} #{test}`
  results = result(test, code, output)

  if(options[:prompt])
    STDOUT << results
    puts "Save this test?"
    if $stdin.gets == "y\n"
      saved.write(results)
      count += 1
    end
    puts `clear`
  else
    saved.write(results)
    count += 1
  end
end

puts "Total saved: #{count}"
puts "Logged in #{saved.path}"

saved.close
