#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float average(float x, float y, float z) {
	float avg;
	avg = (x + y + z) / 3;
	return (avg);
}
int MAX(int num1, int num2) {
	if (num1>num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
main() {
	//int x, y, z;
	//int sum;
	//printf("输入三个输 x, y, z:");7 
	//scanf("%d, %d, %d", &x, &y, &z);
	//sum = x+y+z;
	//printf(" sum=%d\n", sum);
	float a, b, c, ave;
	a = 3.1f; b = 3.2f; c = 3.3f;
	ave = average(a,b,c);
	printf("average=%f\n", ave);
	int n1, n2, max;
	printf("请输入两个数 n1,n2:\n");
	scanf("%d, %d", &n1, &n2);
	max = MAX(n1, n2);
	printf("MAX=%d\n", max);
}