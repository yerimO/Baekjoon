#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n,m;
  int num[1000001]={0};
  cin>>n>>m;
  for(int i=2;i<=m;i++)
  {
    for(int k=2*i;k<=m;k+=i)
      num[k]=1;
    if(num[i]==1) continue;
    }

    for(int i=n;i<=m;i++)
  {
    if(num[i]==0&&i!=1)
      printf("%d\n",i);
  }
  return 0;
}

