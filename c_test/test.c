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


	int
main ( int argc, char *argv[] )
{
	int a = 1;
	assert(a==1&&"why a is not 1");
	if("hahaha"){
		printf("this is always true\n");
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
