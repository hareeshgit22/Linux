//AIM: How to set sem val.
#include "header.h"

void main(int argc,char *argv[])
{

if(argc!=3)
{
printf("Usage: ./get semnum semval\n");
printf("Ex: ./get 2 3\n");
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

r=semctl(id,atoi(argv[1]),SETVAL,atoi(argv[2]));
	if(r<0)
	{
	perror("semctl");
	return;
	}
printf("r=%d\n",r);

}



