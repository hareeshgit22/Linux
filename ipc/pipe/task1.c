//write 10 bytes into pipe and read first five bytes from pipe print and read next five bytes fro pipe.
#include "header.h"
void main()
{
int p[2];
pipe(p);
{
if(fork())
{//parent
char a[10]="abcdefghi";
printf("In parent\n");
write(p[1],a,10);
printf("Done...\n");
while(1);
}
else
{//child
char a[10];
bzero(a,10);
printf("In child\n");
read(p[0],a,5);
printf("first five bytes:%s\n",a);
bzero(a,10);
read(p[0],a,5);
printf("second five bytes:%s\n",a);

}
}
}













