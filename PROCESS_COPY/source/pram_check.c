#include<process_copy.h>
int pram_check(char * filename,int argc,int pronum)
{
	int n=access(filename,F_OK);
	if(n!=0)
	{
		perror("文件打开失败");
		return 0;
	}
	if(argc<4)
	{
		perror("参数数量错误");
		return 0;
	}
	if(pronum<=0)
	{
		perror("偏移量错误");
		return 0;
	}
	return 1;
}

