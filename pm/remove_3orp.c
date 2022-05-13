#include "header.h"
void main()
{
	if(fork()==0)
	{//y+1
		int r;
		srand(getpid());
		r=rand()%10+1;
		printf("In child c1..%d r=%d\n",getpid(),r);
		sleep(r);
		printf("C1 done..\n");
		exit(0);
	}
	else
	{
		if(fork()==0)
		{//y+2
			int r;
			srand(getpid());
			r=rand()%10+1;
			printf("In child c2..%d r=%d\n",getpid(),r);
			sleep(r);
			printf("C2 done..\n");
			exit(0);
		}
		else
		{
			if(fork()==0)
			{
				int r;
				srand(getpid());
				r=rand()%10+1;
				printf("In child c3..%d r=%d\n",getpid(),r);
				sleep(r);
				printf("C3 done..\n");
				exit(0);
			}
			else
			{
				int r,s;
				while((r=wait(&s))!=-1)
					printf("r=%d\n",r);
				printf("all childs are done\n");
				while(1);
			}

		}
	}
}
