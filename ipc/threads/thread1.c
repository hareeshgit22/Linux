#include "header.h"

void * thread_1(void *p)
{
	while(1)
	printf("In thead_1  %d\n",getpid());

}

void main()
{
pthread_t t1;

	pthread_create(&t1,0,thread_1,0);	

	while(1)
	printf("In main...%d\n",getpid());
}








