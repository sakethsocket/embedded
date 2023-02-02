#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
void main(int argc,char *argv[])
{
	struct stat s;
	if((argc<2)||(argc>2))
	{
		printf("Invalid inputs\n");
		exit(1);
	}
	stat(argv[1],&s);
	printf("%ld-dev\n",s.st_dev);
	printf("%ld-inode\n",s.st_ino);
	printf("%ld-rdev\n",s.st_rdev);
	printf("%d-mode\n",s.st_mode);
	printf("%d-link count\n",s.st_nlink);
	printf("%d-uid\n",s.st_uid);
	printf("%d-gid\n",s.st_gid);
	printf("%ld-size\n",s.st_size);
	printf("%d-blksize\n",s.st_blksize);
	printf("%ld-bloks\n",s.st_blocks);
	printf("%ld-atime\n",s.st_atime);
	printf("%ld-mtime\n",s.st_mtime);
	printf("%ld-ctime\n",s.st_ctime);

}


