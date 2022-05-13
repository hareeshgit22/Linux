#include "header.h"
void my_isr(int n){
printf("In isr...\n");
sleep(20);
printf("after isr of sleep\n");
}
void main()
{
struct sigaction v;
printf("Hello pid=%d\n",getpid());
v.sa_handler=my_isr;
sigemptyset(&v.sa_mask);//allow other signals when my process is executing ISR
sigaddset(&v.sa_mask,3);


//sigfillset(&v.sa_mask);//block other signals when my process is executing ISR
v.sa_flags=0;
//signal(SIGINT,my_isr);
sigaction(2,&v,0);

while(1);
}





