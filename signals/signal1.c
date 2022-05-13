#include "header.h"
void my_isr(int n){
printf("In isr n=%d\n",n);
}
void main()
{
printf("hello...pid=%d\n",getpid());
signal(SIGINT,my_isr);
while(1);
}




