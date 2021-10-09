#define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
int Fib(int n){if (n < 3)
{
return 1;
}else{
return Fib(n - 1) + Fib(n - 2);
}}int main()
{int n = 50;int ret = Fib(n);printf("%d\n", ret);getchar();
}
 

