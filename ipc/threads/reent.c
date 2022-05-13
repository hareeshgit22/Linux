#include "header.h"

void * thread_1(void *p)
{
	while(1)
	printf("In thead_1 %d  %ld\n",getpid(),pthread_self());

}

void main()
{
pthread_t t1,t2;

	pthread_create(&t1,0,thread_1,0);	
	pthread_create(&t2,0,thread_1,0);	
	
	//while(1)

	printf("In main...%d\n",getpid());
	pthread_exit(0);
}








