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
v.sem_num=3;//check 3rd semaphore is zero
v.sem_op=0;
v.sem_flg=0;

for(ch='A'; ch<'Z';ch++)
{
semop(id,&v,1); //if 3rd semaphore is zero it will enter into critical section of code.
semctl(id,2,SETVAL,1);//locking other process by setting val to 1
write(fd,&ch,1);   //write char
semctl(id,3,SETVAL,1); //locking itself by setting val to 1
semctl(id,2,SETVAL,0); //unlocking other process
}

printf("Done...\n");
}





