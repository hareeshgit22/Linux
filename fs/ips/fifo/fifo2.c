#include "header.h"
void main()
{//scan the data from user and put it into fifo.

mkfifo("f1",0664);
perror("mkfifo");

char s[20];
printf("Before open function\n");

int fd=open("f1",O_RDONLY);

printf("after open function\n");
while(1){
if(read(fd,s,sizeof(s))==0);
break;
printf("%s",s);
}
}
