#include "header.h"
void main(){

	int p[2];
	pipe(p);

	if(fork()<0)
	{
		perror("fork");
		return;
	}

	if(fork()==0)
	{//child 1 --->ps -e
		close(p[0]);
		dup2(p[1],1); //instead of putting in screen put in pipe.
		execlp("ps","ps","-e",NULL);

	}
	else
	{
		if(fork()==0)
		{
			close(p[1]);
			dup2(p[0],0);
			execlp("grep","grep","pts/1",NULL);
		}
		else
		{
			close(p[1]);
			close(p[0]);
			

		}

	}
}







