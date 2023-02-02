#include<stdio.h>
void main()
{
	/*int x,y,z,r,sum=0,i=1;
	printf("enter x,y value");
	scanf("%d %d",&x,&y);
	while(x<=y)
	{
		z=x;	
		r=z%10;
		if(r>1)
		{
			sum=0;
			printf("invalid input");
			break;
		}
		z=z/10;
		sum=sum+(r*i);
		i=i*2;
		printf("%d",sum);
		x++;
		sum=0;
	}*/
	int x,i,c=0;
	printf("enter x value");
	scanf("%d",&x);
	for(i=31;i>=2;i--)
	{
		((x&(0x7<<i))==(0x5<<i))?c++:0;
	}
	printf("%d",c);

}
