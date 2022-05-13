//write a program to send one string from parent to child via pipe and in child covert into uppercase send back to parent.

#include "header.h"
void main()
{
int p[2];
int p1[2];
pipe(p);
pipe(p1);
if(fork())
{//parent
char s[10]="abcdefghi";
char a[10];
write(p[1],s,10);
printf("send data from parent=%s\n",s);
read(p1[0],a,10);
printf("Recieve data from child=%s\n",a);
}
else
{//child
char s[10];
read(p[0],s,10);
char *p=s;
while(*p)
{
*p=*p^1<<5;
p++;
}
printf("In child : %s\n",s);
write(p1[1],s,10);
}
}










