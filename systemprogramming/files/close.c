#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
void main()
{
	int fd1,fd2,ret1,ret2,ret;
	char buf1[10],buf2[10];
	fd1=open("sample.txt",O_RDONLY);
	if(fd1<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	ret1=read(fd1,buf1,9);
	if(ret1<0)
	{
		printf("Failed to read\n");
		exit(1);
	}
	buf1[ret1]='\0';
	printf("%s\n",buf1);
	fd2=open("sample.txt",O_RDONLY);
        if(fd2<0)
        {       
                printf("Failed to open\n");
                exit(1);
        }       
        ret2=read(fd2,buf2,5);
        if(ret2<0)
        {       
                printf("Failed to read\n");
                exit(1);
        }       
        buf2[ret2]='\0';
        printf("%s\n",buf2);
	ret=close(fd1);
	printf("%d\n",ret);
	close(fd2);
}

