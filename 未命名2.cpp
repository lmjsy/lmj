#include <iostream>
using namespace std;
int main()  
{
    unsigned long n, step, nextStep = 2, nextnextStep = 1;
    cout << "请输入你要走的台阶数 n :" ;
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
	    cout << "走台阶有 " << step << " 种方案。" << endl;
    }
	return 0;
}
