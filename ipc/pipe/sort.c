#include<stdio.h>
void main()
{
int a[5];

int i,j,ele;
ele=(sizeof(a)/sizeof(a[0]));

printf("Enter the data\n");
for(i=0; i<ele; i++)
scanf("%d",&a[i]);

printf("Before sorting\n");
for(i=0; i<ele; i++)
printf("%d",a[i]);
printf("\n");
printf("After sorting\n");
/*for(i=0; i<ele-1; i++)
for(j=0; j<ele-1-i; j++)
if(a[j]>a[j+1])
{
int temp;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}*/


for(i=0; i<ele-1; i++)
for(j=1; j<ele; j++)
if(a[i]>a[j+i])
{
int temp;
temp=a[i];
a[i]=a[j+i];
a[j+i]=temp;
}
for(i=0; i<ele; i++)
printf("%d",a[i]);
}


