#include<stdio.h>
int main(){
  int a,b,c,d;
  printf("请输入三个整数(中间用空格隔开:");
  scanf("%d %d %d",&a,&b,&c);
  d=a;//假设a是最大的数，把它的值赋值给d
  if(b>d) d=b;
  if(c>d) d=c;
  printf("d=%d\n",d);
  return 0;
}
