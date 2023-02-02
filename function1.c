#include<stdio.h>
#include"myheader.h"
void main()
{
        int opt,res,n,m;
        char subopt,k;
        printf("menu\n 0.exit\n 1.binaryoperation\n 2.mathop\n 3.swap\n  4.ascii\n 5.fibanocci\n");
        printf("select the option");
        scanf("%d",&opt);
	 __fpurge(stdin);
        switch(opt)
        {
                case 0: exit(0);
                case 1: printf("select the option\n a.countz\n b.binary\n c.swapbits\n d.replace101\n");
                        scanf("%c",&subopt);
                        __fpurge(stdin);
			switch(subopt)
                        {
                                case 'a':printf("enter n value");
                                         scanf("%d",&n);
                                         res=countz(n);
                                         printf("countz=%d\n",res);
                                         break;
                                case 'b':printf("enter n value");
                                         scanf("%d",&n);
                                         binary(n);
                                         break;
                                case 'c':printf("enter n value");
                                         scanf("%d",&n);
				          res=swapbits(n);
                                         printf("afterswap=%d\n",res);
                                         break;
                                case 'd':printf("enter n value");
                                         scanf("%d",&n);
                                         res=replace101(n);
                                         printf("afterreplace=%d\n",res);
                                         break;
                                default:printf("invalid input\n");
                                }
                        break;
		case 2:printf("select the option\n a.palindrome\n b.sumofdigits\n c.decimal\n");
                        scanf("%c",&subopt);
                       __fpurge(stdin);
                        switch(subopt)
                        {
                                case 'a':printf("enter n value");
					 scanf("%d",&n);
                                         palindrome(n);
                                         break;
                                case 'b':printf("enter n value");
                                         scanf("%d",&n);
                                         sumofdigits(n);
                                         break;
                                case 'c':printf("enter n value");
                                         scanf("%d",&n);
                                         decimal(n);
                                         break;
                                default:printf("invalid input");
                        }
                        break;
		case 3:printf("select the option\n a.swapu3\n b.swapn3\n c.swapb\n");
                        scanf("%c",&subopt);
                       __fpurge(stdin);
                       switch(subopt)
                       {
                               case 'a':printf("enter n,m value");
                                        scanf("%d %d",&n,&m);
                                        swapu3(n,m);
                                        break;
                               case 'b':printf("enter n,m value");
                                        scanf("%d %d",&n,&m);
                                        swapn3(n,m);
                                        break;
                               case 'c':printf("enter n,m value");
                                        scanf("%d %d",&n,&m);
                                        swapb(n,m);
                                        break;
                               default:printf("invalid input");
                       }
                       break;
                case 4:printf("select the option\n a.uptolow\n b.lowtoup\n c.charactertoint\n");
                       scanf("%c",&subopt);
                       __fpurge(stdin);
                       switch(subopt)
                       {
                               case 'a':printf("enter k value");
                                         scanf("%c",&k);
                                         uptolow(k);

                                         break;
                               case 'b':printf("enter k value");
                                        scanf("%c",&k);
                                        lowtoup(k);

                                        break;
                               case 'c':printf("enter k value");
                                        scanf("%c",&k);
                                        charactertint(k);

                                        break;
                               default:printf("invalid input");
                       }
                       break;
		

		   case 5:printf("enter n value");
                       scanf("%d",&n);
                       fibanocci(n);

                       break;
                default:printf("invalid");
        }

}
