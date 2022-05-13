#include "header.h"
void main()
{
struct rlimit v;

printf("pid=%d\n",getpid());
if(getrlimit(RLIMIT_CPU,&v)<0)
{
perror("getrlimit");
return;
}
perror("getrlimit");
printf("soft limit=%lu Hard limit-%lu\n",v.rlim_cur,v.rlim_max);
////////////////////////////////////////////////////////
v.rlim_cur=5;
if(setrlimit(RLIMIT_CPU,&v)<0)
{
perror("setrlimit");
return;
}
perror("setrlimit");
////////////////////////////////////////////////////////////
if(getrlimit(RLIMIT_CPU,&v)<0)
{
perror("getrlimit");
return;
}
perror("getrlimit");
printf("soft limit=%lu Hard limit=%lu\n",v.rlim_cur,v.rlim_max);

while(1);
}




