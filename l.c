/*void display()
{
	extern int x;
	printf("%d",x);
}*/
#include<stdio.h>
void main()
{
	int a[5]={40,50,1,8,10};
	int i,big=0,sbig=0;
	for(i=0;i<5;i++)
	{
		if(big<a[i])
		{
			big=a[i];
			sbig=big;
			continue;
		}
		else if(sbig<a[i])
		{
			sbig=a[i];
		}
	}
	printf("%d %d",big,sbig);
}
