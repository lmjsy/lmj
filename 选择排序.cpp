#include<stdio.h>
#include<stdlib.h>
#define N 8
void select_sort(int a[],int n)//nΪ����a��Ԫ�ظ���
{
    //����N-1��ѡ��
    for(int i=0; i<n-1; i++)
    {
        int min_index = i; 
        //�ҳ���iС�������ڵ�λ��
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        //����iС���������ڵ�i��λ�ã�����պã��Ͳ��ý���
        if( i != min_index)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;//������ǣ��ͽ��н��� 
        }
    }
}
int  main()
{
    int num[N] = {89, 38, 11, 78, 96, 44, 19, 25};
    select_sort(num, N);
    for(int i=0; i<N; i++)
        printf("%d  ", num[i]);
    printf("\n");
    system("pause");
    return 0;
}
