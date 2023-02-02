# 1 "swapb.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "swapb.c"
int swapb(int n, int m)
{

        n=n^m;
        m=n^m;
        n=n^m;
         printf("%d %d",n,m);


}
