#include <stdio.h>
#include <string.h>
void move(char x, char y);
void hannuo(int n,char one ,char two,char three)
{
  if(n==1)move(one, three); 
  else
{
  hannuo(n-1,one ,three,two);
  move(one,three);
  hannuo(n-1,two,one,three);
 
}
}
void move(char x,char y)
{
 printf("%c--->%c\n",x,y);
}
 
int main()
{
 int n;
 printf("input your number");
 scanf("%d",&n);
 hannuo(n,'A','B','C');
 return 0;
}

