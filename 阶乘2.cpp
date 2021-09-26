#include<stdio.h>

int main()

{

int i;

int a;

printf("请输入一个整数\n");

scanf("%d",&a); 

int sum=1;

i=2;

while(i<=a)

{

sum=sum*i;

i=i+1;

}

printf("%d的阶乘=%d",a,sum);

return 0;

}
