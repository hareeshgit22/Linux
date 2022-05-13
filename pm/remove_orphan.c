#include "header.h"
void main()
{
printf("Hello pid=%d ppid=%d\n",getpid(),getppid());
	if(fork()==0)
	{
	printf("In child process pid=%d ppid=%d\n",getpid(),getppid());
sleep(10);
	printf("In child process after sleep() pid=%d ppid=%d\n",getpid(),getppid());
	exit(1);
	}
	else
	{
	int r,s;
	printf("In before wait...\n");
	r=wait(&s);
	printf("After wait r=%d s=%d\n",r,s);
	if(WIFEXITED(s))
	printf("child is terminated normally %d\n",WEXITSTATUS(s));
	else if(WIFSIGNALED(s))
	printf("Child is terminated by signal %d\n",WTERMSIG(s));	


while(1);
}
}
