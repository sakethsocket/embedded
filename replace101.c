int replace101(int n)
{
        int i;
        for(i=29;i>=0;i--)

            ((n&(0x7<<i))==((0x5)<<i))?(n=n|(0x7<<i)):0;
        return n;
}

