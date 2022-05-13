#include "header.h"
void main()
{
int i;
printf("Hello...y\n");
for(i=0; i<3; i++)
{
	if(fork()==0)
	{
	printf("Hai....y+%d\n",i+1);
	}
	else
	break;
	

}
while(1);//common
}




