int binary(int n)
{
        int i;
        for(i=31;i>=0;i--)
           ((n&(0x1<<i))==0)?printf("0"):printf("1");
        printf("\n");
}

