#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<fcntl.h>
void main()
{
	int fd,fd1,ret,ret1,i;
	char rbuf[1000],wbuf[1000];
	while(1)
	{
		/*printf("server:");
		  scanf("%[^\n]s",wbuf);
		  __fpurge(stdin);*/
		fd=open("serverfifo",O_RDONLY);
		if(fd<0)
		{
			ret=mkfifo("serverfifo",0660);
			if(ret<0)
			{
				printf("Failed to create fifo\n");
				exit(1);
			}
			else
			{
				fd=open("serverfifo",O_RDONLY);
				if(fd<0)
				{
					printf("Failed to open\n");
					exit(1);
				}
			}
		}
		//printf("ret-%d\n",ret);
		ret=read(fd,rbuf,1000);
		if(ret<0)
		{
			printf("Failed to read\n");
			exit(1);
		}

		ret=write(1,rbuf,ret);
		if(ret<0)
		{
			printf("Failed to write\n");
			exit(1);
		}
		printf("server:");
		scanf("%[^\n]s",wbuf);
		__fpurge(stdin);

		fd1=open("clientfifo",O_WRONLY);
		if(fd1<0)
		{
			printf("Failed to open\n");
			exit(1);
		}
		ret1=write(fd1,wbuf,strlen(wbuf));
		if(ret1<0)
		{
			printf("Failed to write\n");
			exit(1);
		}
		/*ret=read(fd,rbuf,20);
		  if(ret<0)
		  {
		  printf("Failed to read\n");
		  exit(1);
		  }*/
		//rbuf[ret]='\0';
		/*for(i=0;rbuf[i]!='\0';i++)
		  {
		  if((rbuf[i]>='A')&&(rbuf[i]<='Z'))
		  rbuf[i]=rbuf[i]+32;
		  else if((rbuf[i]>='a')&&(rbuf[i]<='z'))
		  rbuf[i]=rbuf[i]-32;
		  }*/
		/*	ret=write(1,rbuf,ret);
			if(ret<0)
			{
			printf("Failed to write\n");
			exit(1);
			}*/	
		close(fd);
	}
}
