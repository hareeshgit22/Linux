//AIM: is to create and open semaphore set and get the semaphore value.
#include "header.h"

void main(int argc,char *argv[])
{

if(argc!=2)
{
printf("Usage: ./get semnum\n");
printf("Ex: ./get 2\n");
return;
}

int id,r;
id=semget(4,5,IPC_CREAT|0644);
	if(id<0)
	{
	perror("semget");
	return;
	}
printf("id=%d\n",id);
/////////////////////////////////////////////////////////////////

r=semctl(id,atoi(argv[1]),GETVAL);
	if(r<0)
	{
	perror("semctl");
	return;
	}
printf("r=%d\n",r);

}



