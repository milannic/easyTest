/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/22/2014 00:17:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<execinfo.h>
#define SIZE 20

int haha(int level){
	int ret;
	int size = SIZE;
	void * EIP[SIZE];
	void * SYMBOL[SIZE];

	ret = backtrace(EIP,size);
	char ** str = backtrace_symbols(SYMBOL,ret);


		
	printf("level = %d\n",level);

	for (int i =0;i<ret;i++){
		printf("%p\n",EIP[i]);
		printf("%s\n",str[i]);
	}
	printf("-------------------\n");
	printf("%p\n",EIP[2]);
	printf("%s\n",str[2]);
	printf("-------------------\n");
	if(level>0){
		ret = haha(level-1);
	}
	free(str);
	return 0;
}

	int
main ( int argc, char *argv[] )
{
	int a = 1;
	assert(a==1&&"why a is not 1");
	if("hahaha"){
		printf("this is always true\n");
	}
	a = haha(5);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
