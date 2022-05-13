#include "header.h"
void my_isr(int n)
{
printf("In isr...\n");

}
void main(){
printf("Hello ...%d\n",getpid());
signal(SIGALRM,my_isr);
alarm(10);
sleep(15);
printf("Hai...\n");
while(1);
}



