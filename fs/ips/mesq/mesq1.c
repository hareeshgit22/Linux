#include "header.h"
struct mybuf{
long mtype;
char name[20];
};

void main(int argc,char *argv[])
{
int id;
id=msgget(4,IPC_CREAT|0664);
if(id<0)
{
perror("msgget");
return;
}
printf("id=%d\n",id);
struct mybuf v;
msgsnd(id,&v,20,0);
v.mtype=atoi(argv[1]);
strcpy(v.name,argv[2]);
}








