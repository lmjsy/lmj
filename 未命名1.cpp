#include <iostream>
using namespace std;
unsigned long cal(unsigned long n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	return cal(n-1)+cal(n-2);
}
int main()
{
    size_t n;
    cout << "��������Ҫ�ߵ�̨���� n :" ;
    cin >> n;
	cout << "��̨���� " << cal(n) << " �ַ�����" << endl;
	return 0;
}

