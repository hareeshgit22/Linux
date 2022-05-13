#include "header.h"
void main()
{
int fd,r;
char s[20];
	fd = open("data",O_RDONLY);
	if(fd<0)
	{
	perror("open");
	return;
	}

bzero(s,sizeof(s));
r=read(fd,s,5);
	if(r<0)
	{
		perror("read");
		return;
	}
//s[r]='\0';
printf("%s\n",s);
printf("r=%d\n",r);
}




/*read()
upon success read will return number of bytes fetched 
upon fail it returns -1
upon EOF it return 0
--------------------------------------------------------------
if we want to read one int from file
read(fd,&num,sizeof(num));
--------------------------------------------------------------
if we want to read one float from file
read(fd,&f,sizeof(f));
--------------------------------------------------------------
if we want read an array of 5 int 
int a[5]
read(fd,a,sizeof(a));
--------------------------------------------------------------
if we want to read one student daa fro file
ST s1;
read(fd,&s1,sizeof(s1));
*/



