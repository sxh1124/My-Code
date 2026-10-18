#include<stdio.h>
int main()
{
	double s, h;
	printf("请输入当前的摄氏温度:");
	scanf("%lf", &s);
	h = s * 9 / 5 + 32;
	printf("%lf", h);
	return 0;
}
