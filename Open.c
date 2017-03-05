/*
这个程序如果选择
1：60秒关机(关机的速度取决于数字大小)
2：弹出10个DOS窗口(弹出的数量也是跟数字有关)
*/
#include <stdio.h>
#include <windows.h>
#include <malloc.h>

/*malloc.h，动态存储分配函数头文件,当对内存区进行操作时,调用相关函数.
ANSI标准建议使用stdlib.h头文件,但许多C编译要求用malloc.h,*/

int main(void)
{
	int c;
	int i;
	int j;

hello:
	printf("1:over\n");
	printf("2:explosion\n");
	printf("please\n");

	scanf_s("%d", &c);		/*很多带“_s”后缀的函数是为了让原版函数更安全，
	传入一个和参数有关的大小值，避免引用到不存在的元素，有时hacker可以利用
	原版的不安全性黑掉系统。比如:char d[20];写成scanf_s("%s",d,20);才是正确的，
	有这个参数20使准确性提高。*/
	
	if (c == 1)
	{
		system("shutdown -s -t 60");	//当数字60越大时关机的速度越快
		
	}
	
	else if (2 == c)
	{
		printf("You're too bad, i'm gonna kill you!\n");
		for (j = 0; j < 10; ++j)			//j < 10 意思是开10个DOS窗口
			system("start");
		/*system函数 是可以调用一些dos命令,自行百度.*/
	}

	else
	{
		printf("please enter again!\n");
		goto hello;

		/*goto语句也称为无条件转移语句，其一般格式如下： goto 语句标号； 
		其中语句标号是按标识符规定书写的符号， 放在某一语句行的前面，
		标号后加冒号(：)。语句标号起标识语句的作用，与goto 语句配合使用*/
	}

	return 0;
}

/*shutdown命令用法大全
-s           关闭计算机   
-r           关闭并重启动计算机    
-f           强制正在运行的应用程序关闭而不事先警告用户   
-t xxx     设置关闭前的超时为 xxx 秒，默认为 30
另外，在倒计时过程输入shutdown /a可以取消关机或重启，
不加/t参数执行则倒计时30秒。一般需要立即关机可以这样写：
（将/s参数换成/r参数就是立即重启） 
.shutdown -f -s -t 0
*/