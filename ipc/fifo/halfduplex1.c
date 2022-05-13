#include "header.h"

void main()
{
int fd1,fd2;
char a[20],b[20];

fd1=open("f1",O_RDONLY);
read(fd1,a,sizeof(a));
printf("In process2 reading from pipe:%s\n",a);

fd2=open("f2",O_WRONLY);
printf("In process 2 writing into pipe\n");
scanf("%s",b);
write(fd2,b,strlen(b)+1);

}






