#include <iostream>
using namespace std;

int Fact(int n)
{
    if (n == 1)          
        return 1;     
    else
    {
        return n = n * Fact(n - 1);     
    }
}

int main()
{
    int n;
    cout << "请输入一个整数：";
    cin >> n;
    cout << n << "的阶乘为" << Fact(n);
}

