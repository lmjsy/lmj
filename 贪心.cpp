#include <iostream>
#include <cstring>
using namespace std;
 

int c[7] = { 9,8,7,6,5,4,3 };
int b[7] = {1,2,5,10,20,50,100};

void minnum()
{
	int money=0;
	cin >> money;
	int  i = 6;
	int fee = 0;
	int a[7];
	memset(a, 0, sizeof(a));
	while (fee < money)
	{
		while (fee + b[i] < money&&c[i]>0)
		{
			fee += b[i];
			a[i]++;
			c[i]--;
		}
		if (fee == money)
			break;
		else
			i--;
	}
	for (int i = 0; i < 7; i++)
	{
		if (!a[i])
			continue;
		cout << b[i] << " : " << a[i] << endl;
	}
}
