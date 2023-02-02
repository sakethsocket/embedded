#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/stat.h>
struct dob
{
	unsigned int date:5;
	unsigned int month:4;
	unsigned short int year;
};
struct nominee
{
	char n_name[100];
	unsigned int n_mbno;
	unsigned long int n_adhno;
};
struct address
{
	char h-no[50];
	char area[50];
	char location[50];
	char dist[50];
	char state[50];
	unsigned int pin;
};
struct profile
{
	signed int bal;
	char u_name[100];
	char u_id[8];
	char password[16];
	unsigned long int acc-no;
	unsigned long int adh-no;
	unsigned int mbl-no;
	char gen;
	struct dob d;
	struct nominee n;
	struct address a;
};
void main()
{
	struct profile p;
	struct sockaddr_in serv,client;
	int opt,sockfd,newsockfd,ret,client_size*;
	ret=mkdir("database",0666);
	if(ret<0)
	{
		printf("failed to create directory\n");
		exit(1);
	}
	ret=opendir("database",O_RDWR);
	if(ret<0)
	{
		printf("failed to open directory\n");
		exit(1);
	}
	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	bzero(&serv,sizeof(struct sockaddr_in));
	serv.sin_family=AF_INET;
	serv.sin_prot=htons(5000);
	serv.sin_addr.s_addr=INADDR_ANY;
	ret=bind(sockfd,(struct sockaddr *)&serv,sizeof(serv));
	if(ret<0)
	{
		printf("failed to bind\n");
		exit(1);
	}
	ret=listen(sockfd,5);
	if(ret<0)
	{
		printf("failed to listen\n");
		exit(1);
	}
	client_size=sizeof(client);
	newsockfd=accept(sockfd,(struct sockaddr *)&client,&client_size);
	

	


	
	







