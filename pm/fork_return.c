#include "header.h"
void main()
{
int r;
printf("Hello pid = %d\n",getpid());
r = fork();
if(r==0){
printf("In child....\n");
while(1);
}
else
{
printf("In parent....\n");
while(1);
}
printf("Common code..\n");
//printf("Hai r = %d pid = %d\n",r,getpid());
//while(1);
}





