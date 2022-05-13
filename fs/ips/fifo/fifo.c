/* named pipe(FIFO)
functions invoved in fifo
-->mkfifo();
or
-->mknod();
-->open();
-->read();
-->write();

pipe()--->unnamed pipe

there is no file created in harddisc.

fifo()----->named pipe
there is file created in harddisc. 

mkfifo : it will creat only fifo file.
mknod : it will creat along with fifo file other spcial pipe also we can creat.
syntax:
	mkfifo f1
	mknod f2 p

mkfifo():

1)mkfifo() is library function.
2)it will creat only fifo file 

mknod():
1)mknod() is system call
2)it will creat other types of files

mkfifo();
success:if file is not there and creat
fail:if file is already there.

*/





















