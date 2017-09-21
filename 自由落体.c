#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i;
	float s;
	float *h;
	h = (float*)malloc(sizeof(float)* 11);//动态申请11个float型数据存储空间
    *h = 100;//将h[0]赋值为100
	s = *h;
	for (i = 1; i < 11; i++)
	{
		*(h + i) = *(h + i - 1) / 2;
		s += *(h + i) * 2;
	}
	for (i = 1; i < 11; i++)
		printf("\n第%d次反弹的高度为%5.2f",i,*(h+i));
	printf("\n第10次落地时经过的路程是%5.2f米\n",s);
	free(h);
	system("pause");
	return 0;
}