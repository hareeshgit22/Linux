//WAP to find the sizeof the file without opening it.

/* #include<sys/stat.h> 
stat(const char *pathname,struct stat *statbuf);
*/


#include "header.h"
void main(int argc,char** argv)
{
if (argc!=2)
{
printf("usage: ./a.out file_name\n");
return;
}
struct stat v;

if(stat(argv[1],&v)<0)
{
perror("stat");
return;
}

//printf("File size=%u\n",(unsigned int)v.st_size);
//printf("Inode number=%llu\n",(unsigned long long)v.st_ino);

printf("%o\n",v.st_mode);
printf("%o\n",v.st_mode&0777);

if(S_ISREG(v.st_mode))
printf("regral file\n");
else if(S_ISDIR(v.st_mode))
printf("directory file\n");
}


