#include<bits/stdc++.h>
using namespace std;
int a[7],cnt;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=6;i++)
  cin>>a[i];
  while(n>=100)
  {
    if(a[6]==0) break;
    n-=100;
    cnt++;
    a[6]--;
  }
  while(n>=50)
  {
    if(a[5]==0) break;
    n-=50;
    cnt++;
    a[5]--;
  }
  while(n>=20)
  {
    if(a[4]==0) break;
    n-=20;
    cnt++;
    a[4]--;
  }
  while(n>=10)
  {
    if(a[3]==0) break;
    n-=10;
    cnt++;
    a[3]--;
  }
  while(n>=5)
  {
    if(a[2]==0) break;
    n-=5;
    cnt++;
    a[2]--;
  }
  while(n>=1)
  {
    if(a[1]==0) break;
    n-=1;
    cnt++;
    a[1]--;
  }
  if(n==0)cout<<cnt;
  else cout<<"NO";
}
