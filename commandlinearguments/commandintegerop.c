#include<stdio.h>
int* convert(char **,int );
void binary(int );
void ascending(int *,int);
void descending(int *,int);
void palindrome(int );
void main(int argc,char *argv[])
{
	int i;
	int *p;
	if(argc<=2)
	{
		if((argv[1][0]='-')&&(argv[1][1]=='h'))
		{
			printf("please provide the command input in the format\nintop -option values\n -a.binary\n -b.ascending\n -c.descending\n -d.palindrome\n -h.help\n");
		}

		printf("less no. of inputs\n");
		exit(1);
	}
	else
	{
	
		if(argv[1][0]!='-')
		{
			printf("invalid input format......for help -h\n");
			exit(1);
		}
		else if(argv[1][1]==('a')||(argv[1][1]==('b'))||(argv[1][1]==('c'))||(argv[1][1]==('d'))||(argv[1][1]==('h')))
		{
			p=convert(argv,argc);
                        switch(argv[1][1])
                        {
                                case 'a': for(i=0;i<argc-2;i++)
                                        {
                                                binary(p[i]);
                                        }
                                        break;
                                case 'b': ascending(p,argc);
                                          break;
                                case 'c': descending(p,argc);
                                          break;
                                case 'd': for(i=0;i<argc-2;i++)
                                          {
                                                  palindrome(p[i]);
                                          }
                                          break;
                                case 'h': printf("please provide the command input in the format\nintop -option values\n -a.binary\n -b.ascending\n -c.descending\n -d.palindrome\n -h.help\n");
                                          break;
                                default : printf("invalid option\n");
                                          exit(1);
			}
		}
		else
		{
			 printf("invalid option-select from these\n a.\n b.\n c.\n d.\n h.\n");
                        exit(1);

		}
	}
}
int* convert(char **p,int n)
{
	int i,rem,j,k=0,sum=0,minus=0;
	int *s;
	s=(int *)malloc((n-2)*sizeof(int));
	for(i=2;i<n;i++)
	{
		minus=0;
		sum=0;
		j = 0;
		if(p[i][0]=='-')
		{
			minus=1;
			j++;
		}
		for(j;p[i][j]!='\0';j++)
		{
			if((p[i][j]>='0')&&(p[i][j]<='9'))
			{
				rem=p[i][j]-48;
				sum=(sum*10)+rem;
			}
			else
			{
				printf("enter valid integer\n");
				exit(1);
			}
		}
		if(minus==1)
			sum=-(sum);
		s[k]=sum;
		k++;
	}
	return s;
}
void binary(int p)
{
	int i;
	for(i=31;i>=0;i--)
	{
		((p&(0x1<<i))==0)?printf("0"):printf("1");

	}
	printf("\n");
}
void ascending(int *s,int n)
{
	int i,j,temp;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-2;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
		printf("%d\t",s[i]);
	}
}
void descending(int *s,int n)
{
	int i,j,temp;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-2;j++)
		{
			if(s[i]<s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
		printf("%d\t",s[i]);
	}
}
void palindrome(int p)
{

	int r,rev=0,t;
	t=p;
	while(t!=0)
	{
		r=t%10;
		t=t/10;
		rev=(rev*10)+r;
	}
	if(rev==p)
		printf("%d-palindrome\n",p);
	else
		printf("%d-not palindrome\n",p);
}
	
	
		


	
	 

