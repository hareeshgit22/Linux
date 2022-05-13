#include "header.h"
void main()
{
struct sembuf v;
char ch;
int id=semget(4,5,IPC_CREAT|0644);
	if(id<0)
	{
	perror("semget");
	return;
	}

int fd=open("data",O_WRONLY|O_APPEND|O_CREAT,0644);
	if(fd<0)
	{
	perror("open");
	return;
	}
v.sem_num=2;
v.sem_op=0;
v.sem_flg=0;

printf("Before..\n");
semop(id,&v,1);
semctl(id,2,SETVAL,1);
printf("After...\n");

for(ch='a'; ch<'z';ch++)
{
write(fd,&ch,1);
sleep(1);
}
semctl(id,2,SETVAL,0);
printf("Done...\n");
}





