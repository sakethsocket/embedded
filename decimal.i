# 1 "decimal.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "decimal.c"
int decimal(int n)
{

        int temp,sum=0,i=1,r;
        temp=n;
        while(temp!=0)
        {
           r=temp%2;
           temp=temp/2;
           sum=sum+(i*r);
           i=i*10;
        }
        printf("%d",sum);
}
