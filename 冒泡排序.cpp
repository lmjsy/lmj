#include<stdio.h>
#include<stdlib.h>
#define N 8
 void bubble_sort(int a[],int n)//nΪ����a��Ԫ�ظ��� 
{
	for(int i=0;i<n-1;i++)//�ⲿ�ȽϵĴ��� 
	{
		for(int j=0;j<n-1-i;j++)//�ڲ�ÿһ�ֱȽ�ǰn-1-i�� 
		{
			if(a[j]>a[j+1])//Ҫ�ǱȽϵ����Ⱥ�һ�����󣬽���λ�� 
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
