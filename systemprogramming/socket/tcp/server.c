#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
void main()
{
	int sockfd,newsockfd,client_size,ret;
	char buf[256];
	struct sockaddr_in serv,client;
	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	//bzero(&serv,0,sizeof(struct sockaddr_in));
	memset(&serv,0,sizeof(struct sockaddr_in));
	serv.sin_family=AF_INET;
	serv.sin_port=htons(5000);
	serv.sin_addr.s_addr=INADDR_ANY;
	ret=bind(sockfd,(struct sockaddr *)&serv,sizeof(serv));
	if(ret<0)
	{
		printf("Failed to bind\n");
		exit(1);
	}
	ret=listen(sockfd,5);
	if(ret<0)
	{
		printf("Failed to listen\n");
		exit(1);
	}
	client_size=sizeof(client);
	newsockfd=accept(sockfd,(struct sockaddr*)&client,&client_size);
	ret=read(newsockfd,buf,256);
	if(ret<0)
	{
		printf("Failed to read\n");
		exit(1);
	}
	write(1,buf,ret);
	ret=write(newsockfd,"Dharmendra",strlen("Dharmendra"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	close(newsockfd);
	close(sockfd);
}
