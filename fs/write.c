#include "header.h"
void main()
{
//int i=123456;
char s[]="hareesh";
int fd,r;
//bzero(s,sizeof(s));
fd=open("data",O_WRONLY|O_TRUNC|O_CREAT,0600);
	if (fd<0)
	{
	perror("open");
	return;
	}
r=write(fd,s,sizeof(s));
	if(r<0)
	{
	perror("write");
	return;
	}

printf("r=%d\n",r);

}
