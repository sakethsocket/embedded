#include<stdio.h>
#include <arpa/inet.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#include<fcntl.h>
#include<string.h>
void main()
{
 	int sockfd,ret,serv_size;
        char buf[256]="hiiii";
        struct sockaddr_in serv;
        sockfd=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
        printf("%d-sockfd\n",sockfd);
        bzero(&serv,sizeof(serv));
          serv.sin_addr.s_addr=inet_addr("192.168.143.158");
          serv.sin_family=AF_INET;
          serv.sin_port=htons(5000);
	  serv_size=sizeof(serv);
          //connect(sockfd,(struct sockaddr*)&serv,sizeof(serv));
         // ret=sendto(sockfd,"hiii",strlen("hiii"),0,(struct sockaddr *)&serv.sin_addr.s_addr,serv_size);
	 ret=sendto(sockfd,"hiii",strlen("hiii"),0,(struct sockaddr *)&serv,sizeof(serv));

         // ret=recvfrom(sockfd,buf,256,0,(struct sockaddr *)&serv.sin_addr.s_addr,&serv_size);
         ret=recvfrom(sockfd,buf,256,0,(struct sockaddr *)&serv,&serv_size);
          write(1,buf,ret);
}
	
