#include "header.h"
void main()
{

if(fork() == 0)
{//c1 y+1
	if(fork()==0)
	{//c2 y+2
          //excuted by y+2
	}
	else
	{
	//excuted by y+1
	}
//excuted by y+1,y+2;
}

else
{//p y
//excuted by y
}
//excuted by y y+1 y+2
}

















