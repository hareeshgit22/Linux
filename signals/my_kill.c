#include "header.h"
void main(int argc,char **argv)
{

if (argc!=3)
{
printf("Usage: ./my_kill signum pid\n");
return;
}
if(kill(atoi(argv[2]),atoi(argv[1]))<0)
{
perror("kill");
return;
}
}









