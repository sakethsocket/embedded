#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<stdlib.h>
void main()
{
	int fd;
	struct stat buf;
	char *ptr;
	fd=open("file.txt",O_RDWR);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	fstat(fd,&buf);
	ptr=mmap(NULL,buf.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	write(1,ptr,buf.st_size);
	munmap(ptr,buf.st_size);
}

	
