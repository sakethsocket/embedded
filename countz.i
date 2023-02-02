# 1 "countz.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "countz.c"
int countz(int n)
{
        int countz=0,i;
        for(i=31;i>=0;i--)
        {
                if((n&(0x1<<i))==0)
                countz++;
        }
        return countz;
}
