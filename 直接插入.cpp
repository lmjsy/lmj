#include <stdio.h>
//�Զ�����������
void print(int a[], int n ,int i){
    printf("%d:",i);
    for(int j=0; j<8; j++){
        printf("%d",a[j]);
    }
    printf("\n");
}
//ֱ�Ӳ���������
void InsertSort(int a[], int n)
{
    for(int i= 1; i<n; i++){
        if(a[i] < a[i-1]){//���� i ��Ԫ�ش��� i-1 Ԫ����ֱ�Ӳ��룻��֮����Ҫ�ҵ��ʵ��Ĳ���λ�ú��ڲ��롣
            int j= i-1;
            int x = a[i];
            while(j>-1 && x < a[j]){  //����˳����ҷ�ʽ�ҵ������λ�ã��ڲ��ҵ�ͬʱ���������е�Ԫ�ؽ��к��Ʋ�����������Ԫ���ڳ��ռ�
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = x;      //���뵽��ȷλ��
        }
        print(a,n,i);//��ӡÿ�������Ľ��
    }
}
int main(){
    int a[8] = {3,1,7,5,2,4,9,6};
    InsertSort(a,8);
    return 0;
}
