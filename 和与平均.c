#include<stdio.h>


int main() 
{	
	int sum = 0;
	int size[10];
	int times = 0;
	printf("������10��������");
	for (times = 0; times < 10 ; times++)
		scanf_s("%d", &size[times]);
	for (times = 0; times < 10; times++)
		sum += size[times];
		printf("��Щ���ֵĺ�Ϊ��");
	printf("%d\n", sum);
	float pjz = sum / 10;
	printf("ƽ��ֵΪ��%f",pjz);

	return 0;
}