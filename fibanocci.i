# 1 "fibanocci.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "fibanocci.c"
int fibanocci(int n)
{
        int i,z,f;
        int x=0;
        int y=1;
        for(i=0;i<n;i++)
        {
           z=x+y;
           x=y;
           y=z;
           printf("z=%d\n",z);
        }

}
