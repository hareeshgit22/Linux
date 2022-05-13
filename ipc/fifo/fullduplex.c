#include "header.h"

void main(){
	int fd1,fd2;
	char a[20];

	mkfifo("f1",0644);
	mkfifo("f2",0644);
	if(fork()==0)
	{//In child
		read(fd2,a,sizeof(a));
		printf("In process1  child reading from pipe:%s\n",a);
	}
	else
	{//In parent
		int s;
		fd1=open("f1",O_WRONLY);
		printf("In process1 from parent writing into pipe\n");
		write(fd1,a,sizeof(a));
		wait(&s);
	}
}





