#include "header.h"
void my_isr(int n)
{
	printf("In isr n=%d pid=%d\n",n,getpid());
wait(0);
}
void main()
{
if(fork()==0)
{
printf("In c pid=%d\n",getpid());
sleep(20);
}
else
{
printf("In parent pid = %d\n",getpid());
signal(SIGCHLD,my_isr);
while(1);
}

}
