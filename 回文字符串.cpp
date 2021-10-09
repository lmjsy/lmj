#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
 
using namespace std;
 
int fun(int l, int r, string str, int len)
{
	if (0 == len || 1 == len)
		printf("%d is a palindome",r);
	if (str[l] != str[r])
		return 0;
	return fun(l + 1, r - 1, str, len - 2);
}
 
int main()
{
	string ss;
	while (getline(cin, ss))
	{
		cout << fun(0, ss.size() - 1, ss, ss.size()) << endl;;
	}
	system("pause");
}

