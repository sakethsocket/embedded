#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/mman.h>
#include<sys/stat.h>
void main()
{
	int fd,fd1;
	char *ptr,*ptr1;
	struct stat buf;
	fd=open("file.txt",O_RDONLY);
        if(fd<0)
        {
                printf("Failed to open\n");
                exit(1);
        }
        fstat(fd,&buf);
        ptr=mmap(NULL,buf.st_size,PROT_READ,MAP_SHARED,fd,0);
	fd1=open("file1.txt",O_CREAT|O_RDWR,0666);
        if(fd1<0)
        {
                printf("Failed to open\n");
                exit(1);
        }
	ftruncate(fd1,buf.st_size);
        ptr1=mmap(NULL,buf.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd1,0);
	memcpy(ptr1,ptr,buf.st_size);
}
	



