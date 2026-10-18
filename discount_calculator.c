#include<stdio.h>

int main()
{
	float yuanjia, dazheshu, zhehoujia;
	printf("请输入原价和打折数(中间用空格隔开):");
	scanf("%f %f", &yuanjia, &dazheshu);
	zhehoujia = yuanjia * dazheshu / 10;
	printf("zhehoujia=%.2f",zhehoujia);
	return 0;
}
