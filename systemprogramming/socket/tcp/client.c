#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int sockfd,ret;
	char buf[256]="hiiii";
	struct sockaddr_in serv;
	    sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	  bzero(&serv,sizeof(serv));
	  serv.sin_addr.s_addr=inet_addr("192.168.143.69");
	  serv.sin_family=AF_INET;
	  serv.sin_port=htons(5000);
	  connect(sockfd,(struct sockaddr*)&serv,sizeof(serv));
	  ret=send(sockfd,"hiii",strlen("hiii"),0);
	  ret=recv(sockfd,buf,256,0);
	  write(1,buf,ret);
}
