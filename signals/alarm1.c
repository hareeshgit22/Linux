#include "header.h"
int a=10;
void my_isr(int n)
{
printf("In isr..n=%d\n",n);
a-=2;
	if(a==0)
	exit(0);

alarm(a);
}
void main()
{
printf("Hello pid=%d\n",getpid());
signal(SIGALRM,my_isr);
//alarm(1);
alarm(a);//we can not set multiple alarms at atime latest alarm will set.
printf("Hai...\n");
while(1);
}



