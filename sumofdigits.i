# 1 "sumofdigits.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "sumofdigits.c"
int sumofdigits(int n)
{
        int temp,r,sum=0;
        temp=n;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            temp=temp/10;
            sum=sum+r;
        }
        printf("%d",sum);

}
