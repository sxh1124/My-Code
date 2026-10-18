#include<stdio.h>
int main()
{
	int totalseconds, hours, minutes, seconds;
	printf("请输入一个整秒数:");
  scanf("%d", &totalseconds);
	hours = totalseconds / 3600;
	minutes = (totalseconds % 3600) / 60;
	seconds = totalseconds % 60;
	printf("hours=%d\n", hours);
	printf("minutes=%d\n", minutes);
	printf("seconds=%d\n", seconds);
	return 0;
}
 
