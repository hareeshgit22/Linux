#include "header.h"

void main()
{
	int fd;
	char ch;
	fd=open("f1",O_WRONLY|O_APPEND|O_CREAT,0644);
	if(fd<0)
	{
		perror("open");
		return;
	}
	struct flock v;
	v.l_type=F_WRLCK;
	v.l_whence=SEEK_SET;
	v.l_start=0;
	v.l_len=0;
	printf("Before...\n");
	fcntl(fd,F_SETLKW,&v); //if lock is not availible fcntl should block the process.
	printf("After...\n");
	for(ch='A'; ch<='Z'; ch++)
	{
		write(fd,&ch,1);
		sleep(1);
	}
	v.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&v);
	printf("Done...\n");
}



