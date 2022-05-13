//AIM: Understanding semaphore operations.

#include "header.h"

void main(int argc,char *argv[])
{

int id,r;
struct sembuf v;
id=semget(4,5,IPC_CREAT|0644);
	if(id<0)
	{
	perror("semget");
	return;
	}
printf("id=%d\n",id);
/////////////////////////////////////////////////////////////////

v.sem_num=2;
//v.sem_op=0;
v.sem_op=-1;
v.sem_flg=SEM_UNDO;
printf("Before..\n");
semop(id,&v,1);
printf("After..\n");
sleep(30);
printf("Done...\n");
}
