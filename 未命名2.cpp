#include <iostream>
using namespace std;
int main()  
{
    unsigned long n, step, nextStep = 2, nextnextStep = 1;
    cout << "��������Ҫ�ߵ�̨���� n :" ;
    cin >> n;
    if(n > 0)
    {
        if(n == 1)
        {
            step = 1;
        } else if(n == 2)
        {
            step = 2;
        }
        else
        {
            for(int i = 2; i < n; ++i)
            {
                step = nextStep + nextnextStep;
                nextnextStep = nextStep;
                nextStep = step;
            }
        }
	    cout << "��̨���� " << step << " �ַ�����" << endl;
    }
	return 0;
}
