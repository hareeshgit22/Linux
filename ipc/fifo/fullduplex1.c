#include "header.h"

void main()
{
	int fd1,fd2;
	char a[20];
	if(fork()==0)
	{
		
		fd1=open("f1",O_RDONLY);
		read(fd1,a,sizeof(a));
		printf("In process2 child reading from pipe :%s\n",a);
	}
	else
	{	int s;
		fd2=open("f2",O_WRONLY);
		printf("In process 2 parent writing into pipe\n");
		scanf("%s",a);
		write(fd2,a,strlen(a)+1);
		wait(&s);
	}
}






