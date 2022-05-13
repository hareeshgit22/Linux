#include "header.h"
void main(int argc,char *argv[])
{
if (argc!=2)
{
printf("Usage:./a.out Dirname\n");
return;
}
struct dirent *p;
DIR *dp;
dp=opendir(argv[1]);
if(dp==0)
{
perror("opendir");
return;
}
while(p=readdir(dp))
{
if(p->d_name[0]!='.')
printf("%s  ",p->d_name);
}
printf("\n");
}


