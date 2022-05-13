#include "header.h"
void abc(void)
{
printf("In abc....\n");
}
void func(void){
printf("in func\n");
}

void main()
{
atexit(abc); //to register abc function
atexit(func); //to register atexit function
printf("Hai...\n");
sleep(10);
printf("Bye..\n");
exit(0);
}

