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
    cout << "������һ��������";
    cin >> n;
    cout << n << "�Ľ׳�Ϊ" << Fact(n);
}

