//findout the size of the pipe

/*1) if all file descriptors refering to the write end of a pipe have been closed,then an attempt to read(2) from the pipe wil see end-of-file (read(2) will return 0)
2)if all file descriptors refering to the read end of a pipe have been closed,then we trying to write the data into pipe processrecieve sigpipe signal.the default action of the sigpipe is terminate the process.
*/

/*disadvantage of pipe.
only related process can communicate.*/


#include "header.h"
void main()
{
int p[2],c=0;
char ch='a';
//pipe(p);
pipe2(p,O_NONBLOCK);
	while(write(p[1],&ch,sizeof(char))!=-1)
	c++;
	printf("c=%d\n",c);
	
printf("Done...\n");
}








