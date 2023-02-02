# 1 "palindrome.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "palindrome.c"
int palindrome(int n)
{
        int temp,rev=0,r;
                temp=n;
                rev=0;
                while(temp!=0)
                {
                   r=temp%10;
                   temp=temp/10;
                   rev=(rev*10)+r;
                }
  if(n==rev)
                        printf("palindrome");
                else
                        printf("not a palindrome");

}
