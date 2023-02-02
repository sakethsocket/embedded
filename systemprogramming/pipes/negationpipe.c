#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int ret,ret1,wr,wr1,re,re1;
	pid_t pid;
	int fd[2],pd[2];
	char buf1[100],buf2[100];
	char in[50];
	ret=pipe(fd);
	if(ret<0)
	{
		printf("failed to create pipe\n");
		exit(0);
	}
	ret1=pipe(pd);
	if(ret1<0)
	{
		printf("failed to create pipe\n");
		exit(0);
	}
	pid=fork();
	if(pid<0)
	{
		printf("failed to create child\n");
		exit(1);
	}
	else if(pid>0)
	{
		printf("parent entered enter input\n");
		scanf("%[^\n]s",in);
		close(fd[0]);
		close(pd[1]);
		wr=write(fd[1],in,strlen(in));
		//printf("wr:%d\n",wr);
		//sleep(3);
		re=read(pd[0],buf1,100);
		buf1[re]='\0';
		printf("%s\n",buf1);
		close(fd[1]);
		close(pd[0]);
		exit(1);
	}
	else
	{
		//sleep(5);
		int i;
		printf("chiled entered\n");
		close(fd[1]);
		close(pd[0]);
		re1=read(fd[0],buf2,100);
		//printf("child:read:%d\n",re1);
		buf2[re1]='\0';
	//	printf("%s",buf2);
		for(i=0;buf2[i]!='\0';i++)
		{
			if( ( ('a'<=buf2[i]) && (buf2[i]<='z') ) ||( ('A'<=buf2[i]) && (buf2[i]<='Z') ) )
			{
				if(('a'<=buf2[i]) && (buf2[i]<='z'))
				{
				//	printf("b:%c\n",buf2[i]);
					buf2[i]=buf2[i]-32;
				//	printf("%c",buf2[i]);
				}
				else
				{
					//printf("b:%c\n",buf2[i]);
					buf2[i]=buf2[i]+32;
					//printf("%c",buf2[i]);
				}
			}
		}
		wr1=write(pd[1],buf2,strlen(buf2));
		close(pd[1]);
		close(fd[0]);
	}
}
		



