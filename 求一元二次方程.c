#include<stdio.h>
#include<stdlib.h>
void main()
{
	int f(int x);//�Ա����ú�������
	int i;
	for (i = 1; i < 11; i++)
		printf("x=%dʱ  f(x)=%d\n", i,f(i));//������
	system("pause");
	return 0;
}
int f(int x)//��f��x���ĺ���
{
	int s;
	s = x*x + x + 5;
	return(s);
}