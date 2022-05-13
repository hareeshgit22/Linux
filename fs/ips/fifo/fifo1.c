#include "header.h"
void main()
{//scan the data from user and put it into fifo.

mkfifo("f1",0664);
perror("mkfifo");

char s[20];
printf("Before open function\n");

int fd=open("f1",O_WRONLY);

printf("after open function\n");


while(1){
printf("Enter the data...\n");
scanf("%s",s);
write(fd,s,strlen(s)+1);
if(strcmp(s,"bye")==0)
break;
}
}


