#include "header.h"
struct mybuf{
long mtype;
char name[20];
};
void main(int argc,char *argv[])
{
int id;
struct mybuf v;
id=msgget(4,IPC_CREAT|0664);
msgrcv(id,&v,sizeof(v),atoi(argv[1]),0);
perror("msgrcv");
}





