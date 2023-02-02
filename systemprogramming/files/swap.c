#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	int fd,fd1,rd,rd1,cur,wr,wr1;
	char *buf1,*buf2;
	fd=open("1.txt",O_RDWR);
	if(fd<0)
	{
		printf("failed to open\n");
		exit(1);
	}
	printf("fd:%d\n",fd);
	rd=lseek(fd,0,SEEK_END);
	printf("size:%d\n",rd);
	buf1=(char *)calloc(rd,sizeof(char));
	if(buf1==NULL)
	{
		printf("printf failed to allocate memory\n");
		exit(1);
	}
	cur=lseek(fd,0,SEEK_SET);
	printf("cursor position:%d\n",cur);
	rd=read(fd,buf1,rd);
	printf("rd:%d\n",rd);
	printf("%s",buf1);
	fd1=open("2.txt",O_RDWR);
        if(fd1<0)
        {
                printf("failed to open\n");
                exit(1);
        }
        printf("fd:%d\n",fd1);
        rd1=lseek(fd1,0,SEEK_END);
        printf("size:%d\n",rd1);
        buf2=(char *)calloc(rd1,sizeof(char));
        if(buf2==NULL)
        {
                printf("printf failed to allocate memory\n");
                exit(1);
        }
        cur=lseek(fd1,0,SEEK_SET);
        printf("cursor position:%d\n",cur);
        rd1=read(fd1,buf2,rd1);
	printf("rd1:%d\n",rd1);
        printf("%s",buf2);
	fd=open("1.txt",O_WRONLY|O_TRUNC);
	fd1=open("2.txt",O_WRONLY|O_TRUNC);
	if(fd<0 ||fd1<0)
	{
		printf("failed to open\n");
		exit(1);
	}
	wr=write(fd,buf2,rd1);
	if(wr<0)
	{
		printf("failed to write\n");
		exit(1);
	}
	wr1=write(fd1,buf1,rd);
	if(wr1<0)
	{
		printf("failed to write\n");
		exit(1);
	}
}




