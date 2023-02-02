# 1 "binary.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "binary.c"
int binary(int n)
{
        int i;
        for(i=31;i>=0;i--)
           ((n&(0x1<<i))==0)?printf("0"):printf("1");
        printf("\n");
}
