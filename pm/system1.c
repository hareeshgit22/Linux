#include "header.h"
void main()
{
	printf("Hello s1.c pid = %d ppid = %d\n",getpid(),getppid());
	system("./p1");
	printf("Hai..\n");
}





