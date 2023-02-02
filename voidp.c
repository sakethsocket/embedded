#include<stdio.h>
void readinput(void *ptr, int n);
void displayinput(void *ptr,int n);
int biggestvalue(void *ptr,int n);
int secondbig(void *ptr,int n);
void binary(void *ptr, int n);
void ascending(void *ptr,int n);
void main()
{
        int opt,*ptr,n;
        printf("enter the number of values to be stored");
        scanf("%d",&n);
        ptr=(int*)malloc(n*sizeof(int));
        if(ptr==NULL)
        {
                printf("failed");
                exit(1);
        }
        while(1)
        {
                printf("select the option\n 0.exit\n 1.readinput\n 2.displayinput\n 3.biggest\n 4.2ndbig\n 5.binary\n 6.ascending\n");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0: free(ptr);
                                exit(0);
                        case 1: readinput(ptr,n);
                                break;
                        case 2: displayinput(ptr,n);
                                break;
                        case 3: biggestvalue(ptr,n);
                                break;
                        case 4: secondbig(ptr,n);
                                break;
                        case 5: binary(ptr,n);
                                break;
                        case 6: ascending(ptr,n);
                                break;
                        default: printf("enter valid option");
                }
        }
        free(ptr);
}
void readinput(void *ptr,int n)
{
        int i;
        printf("enter the values\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&((int *)ptr)[i]);
        }
}
void displayinput(void *ptr, int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("%d\n",((int *)ptr)[i]);
        }
}
int biggestvalue(void *ptr,int n)
{
        int i,big=0;
        for(i=0;i<n;i++)
        {
                if(big<((int *)ptr)[i])
                        big=((int *)ptr)[i];
        }
        printf("%d\n",big);
}
int secondbig(void *ptr,int n)
{
        int i,j,big=0,sbig=0;
        for(i=0;i<n;i++)
        {
                if(big<((int *)ptr)[i])
                        big=((int *)ptr)[i];
        }
        for(j=0;j<n;j++)
        {
                if(((int *)ptr)[j]!=big)
                {
                        if(sbig<((int *)ptr)[j])
                                sbig=((int *)ptr)[j];
                }
        }

	   printf("%d\n",sbig);
}
void binary(void *ptr,int n)
{
        int i,j=1,sum=0,temp,r;
        for(i=0;i<n;i++)
        {
                temp=((int *)ptr)[i];
                sum=0;
                j=1;
                while(temp!=0)
                {
                        r=temp%2;
                        temp=temp/2;
                        sum=sum+(j*r);
                        j=j*10;
                }
                printf("%d-%d\n",((int *)ptr)[i],sum);
        }
}
void ascending(void *ptr,int n)
{
        int i,j,temp;
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(((int *)ptr)[i]>((int *)ptr)[j])
                        {
                                temp=((int *)ptr)[i];
                                ((int *)ptr)[i]=((int *)ptr)[j];
                                ((int *)ptr)[j]=temp;
                        }
                }
                printf("%d\n",((int *)ptr)[i]);
        }
}



