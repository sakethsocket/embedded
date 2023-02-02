int fibanocci(int n)
{
        int i,z,f;
        int x=0;
        int y=1;
        for(i=0;i<n;i++)
        {
           z=x+y;
           x=y;
           y=z;
           printf("z=%d\n",z);
        }

}


