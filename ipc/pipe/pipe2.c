/*task-1: parent need to scan an array of 5 int from user send it to child via pipe and child read that array and sort it and print it.*/


#include "header.h"
void main()
{
	int p[2];
	pipe(p);

	if (fork()==0)
	{//child
		int a[5],i,j,ele;
		printf("In child before reading\n");
		read(p[0],a,sizeof(a));
		printf("In child after reading before sorting\n");
		for(i=0; i<5; i++)
			printf("%d ",a[i]);
		printf("In child after sorting\n");
		ele=sizeof(a)/sizeof(a[0]);
			for(i=0; i<ele-1; i++)
			{
				for(j=0; j<ele-1-i; j++)
				{
					if(a[j]>a[j+1])
					{
						int temp;
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
		for(i=0; i<5; i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	else
	{//parent
		int a[5],i,ele;
		ele=sizeof(a)/sizeof(a[0]);
		printf("In parent scanning\n");
		for(i=0; i<ele; i++)
			scanf("%d",&a[i]);

		write(p[1],a,20);
	}
}

