#include<stdio.h>

int main()

{

int i;

int a;

printf("������һ������\n");

scanf("%d",&a); 

int sum=1;

i=2;

while(i<=a)

{

sum=sum*i;

i=i+1;

}

printf("%d�Ľ׳�=%d",a,sum);

return 0;

}
