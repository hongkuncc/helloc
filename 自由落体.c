#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i;
	float s;
	float *h;
	h = (float*)malloc(sizeof(float)* 11);//��̬����11��float�����ݴ洢�ռ�
    *h = 100;//��h[0]��ֵΪ100
	s = *h;
	for (i = 1; i < 11; i++)
	{
		*(h + i) = *(h + i - 1) / 2;
		s += *(h + i) * 2;
	}
	for (i = 1; i < 11; i++)
		printf("\n��%d�η����ĸ߶�Ϊ%5.2f",i,*(h+i));
	printf("\n��10�����ʱ������·����%5.2f��\n",s);
	free(h);
	system("pause");
	return 0;
}