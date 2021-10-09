#include <iostream>
#include <list>
using namespace std;
void print_list(list<int>::const_iterator iter_begin,list<int>::const_iterator iter_end)
{
		for (iter_begin;iter_begin!=iter_end;++iter_begin)
		{
			cout<<*iter_begin<<'+';
		}
}
void f(int n,list<int>& list1,int start) 
{
	if (n==1)
	{
		print_list(list1.begin(),list1.end());
		cout<<1<<endl;
	} 
	else
	{
		for (int i=start;i<=n/2;i++) 
		{
			list1.push_back(i); 
			f(n-i,list1,i); 
			list1.pop_back();   
		}
		print_list(list1.begin(),list1.end());
		cout<<n<<endl;
	}
}
int main( void ) 
{
	list<int> list1 ;
	f(4,list1,1);
	return 0;
}


