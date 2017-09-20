#include<stdio.h>
#include<stdlib.h>
void main()
{
	int f(int x);//对被调用函数声明
	int i;
	for (i = 1; i < 11; i++)
		printf("x=%d时  f(x)=%d\n", i,f(i));//输出结果
	system("pause");
	return 0;
}
int f(int x)//求f（x）的函数
{
	int s;
	s = x*x + x + 5;
	return(s);
}