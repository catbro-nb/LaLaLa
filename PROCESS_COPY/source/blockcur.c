#include<process_copy.h>
int blockcur(char * filename,int pronum)
{
	int fd;
	fd=open(filename,O_RDWR);
	int size=lseek(fd,0,SEEK_END);
	int n;
	n=size/pronum;
	if(size%pronum!=0)
	{
		n++;
	}
	return n;
}
