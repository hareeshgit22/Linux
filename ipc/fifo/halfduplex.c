#include "header.h"

void main(){
int fd1,fd2;
char a[20],b[20];

mkfifo("f1",0644);
mkfifo("f2",0644);

fd1=open("f1",O_WRONLY);
printf("In process1 writing into pipe\n");
scanf("%s",a);
write(fd1,a,strlen(a)+1);

fd2=open("f2",O_RDONLY);
read(fd2,b,sizeof(b));
printf("In process1 reading from pipe:%s\n",b);
}







