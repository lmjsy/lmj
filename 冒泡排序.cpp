#include<stdio.h>
#include<stdlib.h>
#define N 8
 void bubble_sort(int a[],int n)//n为数组a的元素个数 
{
	for(int i=0;i<n-1;i++)//外部比较的次数 
	{
		for(int j=0;j<n-1-i;j++)//内部每一轮比较前n-1-i个 
		{
			if(a[j]>a[j+1])//要是比较的数比后一个数大，交换位置 
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int  main()
{
    int num[N] = {89, 38, 11, 78, 96, 44, 19, 25};
    bubble_sort(num, N); 
    for(int i=0; i<N; i++)
        printf("%d  ", num[i]);
    printf("\n");
    system("pause");
    return 0;
}
