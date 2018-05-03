int main(void) {       /* if n beginning of offset for locals */
    int l0i, l0j, l0k; /* l0i @ offset+n, l0j @ offset+n+4, l0k @ offset+n+8 */
    char l0c1;         /* l0c1 @ offset+n+12 */
    short l0s1;        /* l0s1 @ offset+n+14 -- NOTE: not +n+13 */
    short l0s2;        /* l0s2 @ offset+n+16 */
    {
        int l1i;  /* l1i @ offset+n+20 -- NOTE: not +n+18 */
    }
    {
        int l1j;  /* l1j @ offset+n+20 -- NOTE: not +n+18 */
        {
            int l2i;  /* l2i @ offset +n+24 */
        }
        {
            int l2j;  /* l2j @ offset +n+24 */
        }
    }
    return 0;
}
