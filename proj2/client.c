#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/stat.h>
struct login
{
	char userid[8];
       	char pass-pin[16];
}lg;	
struct dob
{
	unsigned int date:5;
	unsigned int month:4;
	unsigned short int year;
}db;
struct nominee
{
	char n_name[100];
	unsigned int n_mbno;
	unsigned long int n_adhno;
}n;
struct address
{
	char h-no[50];
	char area[50];
	char location[50];
	char dist[50];
	char state[50];
	unsigned int pin;
}ad;
struct registration
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
}r;
struct sockaddr_in serv;
int sockfd;
void main()
{
	//struct registration r;
	//struct sockaddr_in serv;
	int opt,ret,sopt,rv,amount=0;
	sockfd=socket(AF_INET,SOCKET_STREAM,IPPROTO_TCP);
	bzero(&serv,sizeof(serv));
	serv.sin_family=AF_INET;
        serv.sin_prot=htons(5000);
        serv.sin_addr.s_addr=inet_addr("127.0.0.1");
	connect(sockfd,(struct sockaddr *)&serv,sizeof(serv));
	while(1)
	{
		printf("Enter the option\n 0.exit\n 1.login\n 2.register\n");
		scanf("%d",&opt);
		__fpurge(stdin);
		switch(opt)
		{
			case 0:exit(0);
			case 1: 
label:ret=login();
				if(ret==-1)
				{
					printf("Failed to login\n");
					goto label;
				}
				if(ret==-2)
				{
					printf("User doesnt exist please register\n");
					break;
				}
				if(ret==0)
				{
					printf("Successfully logged in\n");
login:printf("Enter the option\n 1.deposit\n 2.withdraw\n 3.balance\n 4.transaction history\n 5.profileinfo\n 6.logout\n");
					scanf("%d",&sopt);
					switch(sopt)
					{
						case 1: 
deposit:printf("Enter amount to be deposited\n");
							scanf("%d",&amount);
							__fpurge(stdin);
							ret=send(sockfd,&amount,4,0);
							if(ret<0)
							{
								printf("Failed to send\n");
								goto deposit;
							}
							ret=recv(sockfd,&rv,4,0);
							if(ret<0)
							{
								printf("Failed to receive\n");
								goto deposit;
							}
							printf("Deposited successfully\n");
							printf("balance:%d\n",rv);
							goto login;
							break;
						case 2: 
withdraw:printf("Enter amount to be drawn\n");
	 						scanf("%d",&amount);
							__fpurge(stdin);
							ret=send(sockfd,&amount,4,0);
							if(ret<0)
							{
								printf("Failed to send\n");
								goto withdraw;
							}
							ret=recv(sockfd,&rv,4,0);
							if(ret<0)
							{
								printf("Failed to receive\n");
								goto withdraw;
							}
							printf("Withdrawn successfully\n");
							printf("balance:%d\n",rv);
							goto login;
							break;
						case 3:
balance:ret=send(sockfd,0,4,0);
						       if(ret<0)
						       {
							       printf("Failed to send\n");
							       goto balance;
						       }
						       ret=recv(sockfd,&amount,4,0);
						       if(ret<0)
						       {
							       printf("Failed to receive\n");
							       goto balance;
						       }

							


	

				break;
			case 2: ret=registration();
				break;
			default: printf("Entered invalid option\n");
		}
	}
}
int login()
{
	int l,ret,rv;
label:printf("Enter userid:");
	scanf("%[^\n]s",lg.userid);
	__fpurge(stdin);
	printf("Enter password/pin:");
	scanf("%[^\n]s",lg.pass-pin);
	__fpurge(stdin);
	l=strlen(lg.userid);
	if(l!=8)
	{
		printf("Entered invalid userid\n");
		goto label;
	}
	l=strlen(lg.pass-pin);
	if((l<8)||(l>16))
	{
		printf("Entered invalid password/pin\n");
		goto label;
	}
	ret=send(sockfd,&lg,sizeof(lg),0);
	if(ret<0)
	{
		printf("Failed to send\n");
		return -1;
	}
	ret=recv(sockfd,&rv,4,0);
	if(ret<0)
	{
		printf("Failed to receive\n");
		return -1;
	}
	if(rv==-1)
	{
		printf("User doesnt exist please register\n");
		return -2;
	}
	if(rv==-2)
	{
		printf("Password is invalid\n");
		goto label;
	}
	if(rv==0)
		return 0;
};




	


