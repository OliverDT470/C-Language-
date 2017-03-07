/*
a, b, arce 为三个变量可以放小数

a = 1.2;		
b = 3.6;

矩形两边长度的数值给 a, b;
最后输出两个边长和面积；
*/
#include <stdio.h>

main()
{
	double a, b, area;

	a = 1.2;
	b = 3.6;

	area = a*b;

	printf("a=%f,b=%f,area=%f\n", a, b, area);
}