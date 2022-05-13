#include "header.h"
void main(){
printf("hello  pid=%d ppid=%d\n",getpid(),getppid());
fork();
fork();
fork();
printf("hai pid=%d ppid=%d\n",getpid(),getppid());
while(1);
}


