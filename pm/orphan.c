#include "header.h"
void main()
{
printf("Hello pid=%d ppid=%d\n",getpid(),getppid());
	if(fork()==0)
	{
	printf("In child process pid=%d ppid=%d\n",getpid(),getppid());
sleep(20);
	printf("In child process after sleep() pid=%d ppid=%d\n",getpid(),getppid());

	}
	else
	sleep(10);
}

