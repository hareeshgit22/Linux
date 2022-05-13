#include "header.h"
void main()
{
printf("Hello %d\n",getpid());
fork();
printf("Hai..%d\n",getpid());
sleep(5);
}


