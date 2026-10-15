#include<stdio.h>
int main(){
int max(int x,int y,int z);
int a,b,c,d;
printf("请输入三个整数(中间用空格隔开):");
scanf("%d %d %d",&a,&b,&c);
d=max(a,b,c);
printf("max=%d\n",d);
return 0;
}
int max(int x,int y,int z){
  int q;
  if(x>y){
    if(x>z)q=x;
    else q=z;
}else{
    if(y>z)q=y;
    else q=z;
}
  return q;
}
