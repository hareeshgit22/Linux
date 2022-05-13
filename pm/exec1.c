#include "header.h"
void main()
{

printf("Hello...\n");
execl("/bin/ls","ls","-l","-i","-a",NULL);
printf("Hai....\n");
//system("ls");

}
