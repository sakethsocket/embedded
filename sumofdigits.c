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

