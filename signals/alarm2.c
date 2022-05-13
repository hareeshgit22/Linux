#include "header.h"
void main()
{
int r;
printf("Hello pid=%d\n",getpid());
r=alarm(10);
printf("1) r=%d\n",r);
sleep(9);
r=alarm(5);
printf("2) r=%d\n",r);

while(1);

}
