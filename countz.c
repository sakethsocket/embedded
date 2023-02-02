int countz(int n)
{
        int countz=0,i;
        for(i=31;i>=0;i--)
        {
                if((n&(0x1<<i))==0)
                countz++;
        }
        return countz;
}

