int swapbits(int n)
{
        int i,j;
        for(i=0,j=31;i<j;i++,j--)

           n=(n&(~(0x1<<i)|(0x1<<j)))|((n&(0x1<<i))<<(j-i))|((n&(0x1<<j))>>(j-i));

        return n;
}

