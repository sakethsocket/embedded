# 1 "swapu3.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "swapu3.c"
int swapu3(int n , int m )
{
        int z;
        z=n;
        n=m;
        m=z;
        printf("%d %d",n,m);
}
