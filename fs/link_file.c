/*Hard link:
--ln abc def
both files are regular files
both inode numbers are same
link counts gets increased
if we remove original file we can get the data from another file

soft link:
ex: ln -s one two
one is regular file
two is link file
both inode numbers are different
if we remove original file we cant retrive it.



stat():
for stat() if we give original file or link file it will give original file info.





lstat():
for lstat() if we give original file it will give original file info,and if we give link file it will give link file info








