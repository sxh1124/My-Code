#include <stdio.h>
int main(){
double a,b,sum,diff,mult,div;
printf("请输入两个整数(中间用空格隔开)：");
scanf(%lf %lf,&a,&b);
sum=a+b;
diff=a-b;
mult=a*b;
div=a/b;
printf("%.2f\n",sum);
printf("%.2f\n",diff);
printf("%.2f\n",mult);
printf("%.2f\n",div);
return 0;
}
