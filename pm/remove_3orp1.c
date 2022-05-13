#include "header.h"
void main()
{int a[3];
	if((a[0]=fork())==0)
	{//y+1
		int r;
		srand(getpid());
		r=rand()%10+1;
		printf("In child c1..%d r=%d\n",getpid(),r);
		sleep(r);
		//printf("C1 done..\n");
		exit(0);
	}
	else
	{
		if((a[1]=fork())==0)
		{//y+2
			int r;
			srand(getpid());
			r=rand()%10+1;
			printf("In child c2..%d r=%d\n",getpid(),r);
			sleep(r);
		//	printf("C2 done..\n");
			exit(0);
		}
		else
		{
			if((a[2]=fork())==0)
			{
				int r;
				srand(getpid());
				r=rand()%10+1;
				printf("In child c3..%d r=%d\n",getpid(),r);
				sleep(r);
			//	printf("C3 done..\n");
				exit(0);
			}
			else
			{
				int r,s;
				while((r=wait(&s))!=-1)
				{
				if(r==a[0])
				printf("c1 is done....\n");						
				if(r==a[1])
				printf("c2 is done....\n");						
				if(r==a[2])
				printf("c3 is done....\n");						
				}
				printf("all childs are done\n");
				while(1);
			}

		}
	}
}
