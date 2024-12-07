#include<process_copy.h>
int process_create(char * srcfile,char * destfile,int pronum,int blocksize)
{
	pid_t pid;
	int i;
	char str[1024];
	char str2[1024];
	for(i=0;i<pronum;i++)
	{
		pid=fork();
		if(pid==0)
		{
			break;
		}
	}
	if(pid>0)
	{
		printf("parent pid %d\n",getpid());
		int wait=process_wait();
	}

	else if(pid ==0)
	{
		printf("child pid %d\n",getpid());
		sprintf(str2,"%d",blocksize);
		sprintf(str,"%d",i*blocksize);
		execl("/home/colin/test/20240318/PROCESS_COPY/mod/copy","copy",srcfile,destfile,str2,str,NULL);
	}
	else
	{
		perror("nononnonnononononno");
		return 0;
	}
	return 1;
}
