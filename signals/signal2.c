#include "header.h"
void my_isr(int n)
{
printf("In isr...\n");
signal(n,SIG_DFL);
}
void main()
{
printf("Hello pid=%d\n",getpid());
signal(SIGINT,SIG_IGN);
printf("Hai...\n");
while(1);
}






