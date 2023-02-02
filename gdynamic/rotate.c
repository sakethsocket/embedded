void rotate(int *c,int n,int m)
{
        int temp,i,j;
        for(j=0;j<m;j++)
        {
                temp=c[0];
                for(i=0;i<n-1;i++)
                {
                        c[i]=c[i+1];
                }
                c[i]=temp;
        }
}

