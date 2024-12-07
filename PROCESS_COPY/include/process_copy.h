#pragma once
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
 
//参数验证
int pram_check(char * filename,int argc,int pronum);

//通过进程数量计算每一个子进程拷贝大小，函数返回量blocksize
int blockcur(char * filename,int pronum);

//创建子进程，并且让子进程重载
int process_create(char * srcfile, char * destfile, int pronum,int blocksize);

//父进程调用，负责循环回收僵尸进程
int process_wait(void);
