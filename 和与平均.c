#include<stdio.h>


int main() 
{	
	int sum = 0;
	int size[10];
	int times = 0;
	printf("请输入10个分数：");
	for (times = 0; times < 10 ; times++)
		scanf_s("%d", &size[times]);
	for (times = 0; times < 10; times++)
		sum += size[times];
		printf("这些数字的和为：");
	printf("%d\n", sum);
	float pjz = sum / 10;
	printf("平均值为：%f",pjz);

	return 0;
}