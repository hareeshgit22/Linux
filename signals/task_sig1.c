//disable SIGINT(2) and SIGQUIT(3) for a process to 10 sec after 10 sec enable those signals.

#include "header.h"
void my_isr(int n){
printf("In isr....\n");
signal(2,SIG_DFL);
signal(3,SIG_DFL);
}
void main()
{
printf("pid = %d\n",getpid());
signal(2,SIG_IGN);
signal(3,SIG_IGN);
signal(14,my_isr);
alarm(10);
 printf("Hai...\n");
while(1);
}

