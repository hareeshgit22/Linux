//write a program to send student based structure from parent to child via pipe

#include "header.h"
typedef struct student{
int roll_no;
char name[20]; 
float marks;
struct student *next;
}st;
void main()
{
int p[2],s;
pipe(p);
if(fork())
{//parent
st *new;
new=malloc(sizeof(st));
printf("scanning from parent\n");
scanf("%d %s %f",&new->roll_no,new->name,&new->marks);
new->next=0;
write(p[1],new,sizeof(st));
printf("Done...\n");
wait(&s);
}
else
{//child
st *new;
new=malloc(sizeof(st));
read(p[0],new,sizeof(st));
printf("printing from child=%d %s %f\n",new->roll_no,new->name,new->marks);
}
}










