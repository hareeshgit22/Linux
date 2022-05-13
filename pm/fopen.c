#include "header.h"
void main()
{
FILE *fp=fopen("file.txt","r");
if (fp==0)
perror("fopen");

//printf("file is not present\n");//if we dont supply path its search in pwd.
else
printf("file is present\n");
}


