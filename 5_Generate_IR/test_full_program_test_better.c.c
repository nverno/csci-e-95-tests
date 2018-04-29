int a;
short b;
short int c;
signed short d;

signed short int e;
signed int f;
signed int g;
long h;
long int i;

signed long j;
signed long int k;
unsigned short int l;

unsigned short m;

unsigned long int o;
unsigned long int p;
char q;
signed char r;
unsigned char s;


int funcDeclar(int crap, int crap1); 
int printf(char *c, int i)
{
    int a, b;
    funcDeclar(a, b);
    return 1;
}


int func( int x )
{
    return 0;
}

int main( int p1, char **p2 )
{
    unsigned short int s1_test1, s1_test2;
    int s1_a;
    unsigned short int s1_b;
    int *p_s1_array1[16];
    int s1_array2[16];


    p_s1_array1[1] = &s1_array2[2];
    {
        int s2_a;
        char s2_b;
        s2_a = 0;
        s2_b = 0;
        while(1)
        {
            char* p_s3_a;
            p_s3_a = &s2_b;
            *p_s3_a = s1_b;
            s2_a++;
            s2_b++;
            {
                int* p_s4_a;
                p_s4_a = (int*)p2;
                {
                    int s5_a;
                    s5_a = s1_array2[0];
                }
                {
                    int s5_a;
                    s5_a = s1_array2[1];
                }
            }
            break;
        }

	{ 
            int s3_a;
            for( ; ; )
            {
                unsigned char s4_a;
                s4_a = 0;
                s4_a++;
                s4_a = 5;
                {
                    s4_a = 15;
                }
                break;
            }
            
            for( s3_a = 0; s3_a < 5; s3_a ++ )
            {
                printf("%d, for loop\n", s3_a);
            }
        }
    }
    s1_test1 = s1_test2 / s1_a;
    return s1_test1;
}

char foo_global;
int foo( int foo_p1, int foo_p2 )
{
    long foo_a;
    long foo_b;
    int x;

    foo_a = foo_b + foo_p1 + foo_p2;
    x=1;
    do
    {
        x = 5;
    } while(0);
    return x;
    func(x);
}

void void_foo( void )
{
    int foo_a;
    int foo_b;
    int x;
    foo_a = 0;
    foo_b = 1;
    x = 8;
    if( foo_a < foo_b )
    {
    }
    
    func(x);
}

void void_foo_2(short s1, short s2)
{
    int foo_a;
    int foo_b;
    int x;
    foo_a = s1;
    foo_b = s2;
    x = 8;
    if( foo_a < foo_b )
    {
    }
    else
    {
        char x;
        x = s1 + s1;
    }
    func(x);
}

int void_foo_3(void)
{
    int foo_a;
    int foo_b;
    int x;

    foo_a = foo_b = x;
    x = 5;
    func(x);
    return 0;
}

short* p_void_foo_4(int a1[][100])
{
    int foo_a;
    int foo_b;
    short *x;

    foo_a = a1[0][1];
    foo_b = a1[1][90];
    x = p_void_foo_4(a1);
    func(foo_a);
    return(0);
}

short* p_void_foo_5( int* foo_p1 )
{
    long foo_a;
    long foo_b;
    int x;
    short* pX;
    foo_a = (long)foo_p1;
    foo_b = (long)foo_p1;
    pX = 0;
    x = 5;
    func(x);
    return pX;
}


int funcDeclar(int a, int b)
{
    return a + b;
}

long * p_func (long var);

void expresssions(void) {
    unsigned char uc1;
    short s1;
    int i1;
    long l1;
    int * pi1;
    int arr[4];                 

    s1 = i1 + l1;               
    pi1 = &i1;                  
    l1 = s1 & i1;               
    i1 = ~i1;                   
    i1 = s1 | l1;               
    i1 = s1 ^ l1;               
    i1 = (unsigned short) l1;   
    l1 = (pi1, s1);             
    s1 = 1 ? i1 : l1;           
    s1 = 1 + l1;                
    s1 = (s1 == l1);            

    pi1 = p_func(i1);             
    s1 = (short) *arr;          
    s1 = s1 && s1;              
    s1 = !s1;                   
    l1 = s1 || l1;              
    s1 = uc1 * 3;               
    *pi1 = (i1 + s1) * l1;      
    l1 = s1--;                  
    l1 = s1++;                  
    l1 = --s1;                  
    l1 = ++s1;                  
    s1 <= l1;                   
    l1 = l1 << uc1;             
    arr[2] = arr[3];            
    -(-s1 + +3);                
    
}

long * p_func(long var) {
    return &var;
}
