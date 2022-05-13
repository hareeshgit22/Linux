//For a long running process generate SIGLARM signal after n sec,n-1 sec,n-2 sec....
//when it reaches 0 terminate the process.take n from command line.

#include "header.h"
int n;
void my_isr(int i)
{
printf("In isr...\n");
n--;
if(n==0)
raise(9);
else
alarm(n);
}
void main(int argc,char **argv){
if(argc!=2)
{
printf("Usage:./a.out num\n");
return;
}
printf("Hello..\n");
n=atoi(argv[1]);
alarm(n);
signal(14,my_isr);
printf("hi..\n");
while(1);
}


