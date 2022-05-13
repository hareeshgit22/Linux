/* parent need to scan the data from user put it into pipe.
child read the data from pipe print it into screen

functions involved
pipe() or pipe2()--->to creat a pipe
read() read the data from pipe
write() write the data into pipe

Ex: int p[2];
    pipe(p);
p[0]--->readend of the file
p[1]---->write end of the pipe.


if pipe is empty read will block child process.
if pipe is full write will block parent process.
*/


#include "header.h"
void main()
{
int p[2];
	pipe(p);
	perror("pipe");
printf("readend=p[0]=%d\n",p[0]);
printf("writeend=p[1]=%d\n",p[1]);


if(fork()==0)
{//child
char s[20];
printf("In c before read()..\n");
read(p[0],s,sizeof(s));
printf("In c after read=%s\n",s);
}
else
{//parent
char s[20];
printf("In p...enter the data\n");
scanf("%s",s);
//gets(s);
write(p[1],s,strlen(s)+1);
}

}
