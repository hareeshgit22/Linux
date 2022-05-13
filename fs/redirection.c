#include "header.h"
void main()
{
int fd,i;
int a[5];

	close(0);
	fd=open("data",O_RDONLY);
	if (fd<0)
	{
	perror("open");
	return;
	}
//printf("hello world fd=%d\n",fd);

for(i=0; i<5; i++)
scanf("%d",&a[i]);

for(i=0; i<5; i++)
printf("%d ",a[i]);
}










