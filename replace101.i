# 1 "replace101.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "replace101.c"
int replace101(int n)
{
        int i;
        for(i=29;i>=0;i--)

            ((n&(0x7<<i))==((0x5)<<i))?(n=n|(0x7<<i)):0;
        return n;
}
