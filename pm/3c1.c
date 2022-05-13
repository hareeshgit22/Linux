#include "header.h"
void main()
{//starting of main function.
//y-->y+1
//y-->y+2
//y-->y+3
if (fork()==0)
{
//y+1
printf("In y+1(c1) pid=%d ppid=%d\n",getpid(),getppid());
}
else
{
//y
	if(fork()==0)
	{
	//y+2
	printf("In y+2(c2) pid=%d ppid=%d\n",getpid(),getppid());
	}
	else
	{
	//y
		if(fork()==0)
		{
		//y+3
		printf("In y+3(c3) pid=%d ppid=%d\n",getpid(),getppid());
		}
		else
		{
		//y
		}
		
	}

while(1); //y,y+1,y+2,y+3
}//end of main function
}
