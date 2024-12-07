#include<process_copy.h>

int main(int argc,char ** argv)
{
	int num=atoi(argv[3]);
	int check=pram_check(argv[1],argc,num);
	if(check==1)
	{
		printf("参数正确");
	}
	else
	{
		perror("参数有问题");
	}

	int blocksize=blockcur(argv[1],num);
	int create=process_create(argv[1],argv[2],num,blocksize);
	if(create==1)
	{
		printf("创建成功");
	}
	else
	{
		perror("创建失败");
	}
	
	return 0;
}
