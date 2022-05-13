#include "header.h"
void main(int argc,char *argv[])
{
int fd;
/*fp=fopen("data","w");
fd=open("data",O_WRONLY|O_TRUNC|O_CREAT,0644);*/

/*fp=fopen("data","r");
fd=open("data",O_RDONLY);*/

/*fp=fopen("data","r+");
fd=open("data",O_RDWR|O_CREAT)*/

/*fp=fopen("data","a");
fd=open("data",O_WRONLY|O_CREAT|O_APPEND,0644);*/
if(fd<0)
{
perror("open");
return;
}
printf("fd=%d\n",fd);
}








