#include <iostream>
using namespace std;
public static int Fibonacci1(int n){
		if(n<0){
			return 0;
		}
		else if(n==1||n==2){
			return 1;
		}
		//n=1ʱ���ܺ�Ϊ1 n=2ʱ���ܺ�Ϊ1
		int sta=1;
		int end=1;
		//����һ���н�ֵ
		int temp;
		//��n=3ʱ��ʼ���� һֱ���㵽�����n Ϊֹ
		for (int i = 3; i <= n; i++) {
		    //�Ȱѵ�һ��ֵ���м�ֵ�洢 Ȼ����һ������ǰ�����һ��ֵ������һ��ֵ ����staֵ������
			temp=sta;
			//�ٰѵ�ǰ�ĵڶ���ֵ����sta ��Ϊ��һ�μ������ĵ�һ��ֵ
			sta=end;
			//���յĽ������ԭʼ�ĵ�һ��ֵ���ϵڶ���ֵ ��������������end���ǵ�ǰ�Ľ��
			// Ҳ����һ�μ���ʱ��ĵڶ���ֵ��
			end=temp+end;
		}
		return end;
	}

