#include<stdio.h>
int main()
{
	double a, b, c, t;
	printf("请输入三个数(中间用空格隔开):");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a > b) {
		t = a;a = b;b = t;
	}
	if (a > c) {
		t = a;a = c;c = t;
	}
	if (b > c) {
		t = b;b = c;c = t;
	}
	printf("从小到大排序为:%.2lf,%.2lf,%.2lf\n", a, b, c);
	return 0;
}
