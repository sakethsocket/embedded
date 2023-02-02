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


