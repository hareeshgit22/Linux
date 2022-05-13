#include "header.h"
void main()
{
char *p[] = {"ls","-l","-i",NULL};
//execvp(p[0],p);
execlp("ls","ls","-i",NULL);


}













