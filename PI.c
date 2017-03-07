/*
	符号常量
	关键字
	define 
		首先定义define 
		PI就是圆周率的表示   3.1415926
*/
#include <stdio.h>
#define PI 3.1415926

main()
{
	double r, s;

	r = 5.0;
	s = PI*r*r;

	printf("s=%f\n",s);

}