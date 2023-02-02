# 1 "swapbits.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "swapbits.c"
int swapbits(int n)
{
        int i,j;
        for(i=0,j=31;i<j;i++,j--)

           n=(n&(~(0x1<<i)|(0x1<<j)))|((n&(0x1<<i))<<(j-i))|((n&(0x1<<j))>>(j-i));

        return n;
}
