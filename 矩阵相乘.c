#include<stdio.h>
#include<stdlib.h>
#define m1 4
#define n1 5
#define m2 5
#define n2 6
void main()
{
	int A[m1][n1], B[m2][n2], C[m1][n2];
	int i, j, k;
	for (i = 0; i < m1;i++)//随机生成矩阵A
	   for (j = 0; j < n1; j++)
		    A[i][j] = (int)(rand() * 10 / 32767);//随机生成0~10的整数
	for (i = 0; i < m2;i++)//随机生成矩阵B
	   for (j = 0; j < n2; j++)
		    B[i][j] = (int)(rand() * 10 / 32767);

	printf("\n矩阵A:\n");
	for (i = 0; i < m1; i++)//输出矩阵A
	{
		for (j = 0; j < n1; j++)
			printf("%5d", A[i][j]);
		printf("\n");
	}

	printf("\n输出矩阵B:\n");
	for (i = 0; i < m2; i++)
	{
		for (j = 0; j < n2; j++)
			printf("%5d",B[i][j]);
		    printf("\n");
	}
	if (n1 != m2)//判断两矩阵是否能相乘
	{
		printf("\n矩阵A的列数必须等于矩阵B的行数");
		exit (0);
	}
	for (i = 0; i < m1;i++)//两矩阵相乘
	   for (j = 0; j< n1; j++)
	   {
		   C[i][j] = 0;
		   for (k = 0; k < n1; k++)
			   C[i][j] += A[i][k] * B[k][j];
       }
	printf("\n矩阵A*B的积:\n");
	for (i = 0; i < m1; i++)
	{
		for (j =0; j < n2; j++)
			printf("%5d",C[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}