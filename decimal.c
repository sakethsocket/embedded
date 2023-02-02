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

