#include <iostream>
using namespace std;

int main()
{
  int K,cnt=0;
  cin>>K;
  for(;;)
  {
    if(K%5==0){cnt+=K/5; cout<<cnt<<endl; break;}
    if(K>=0){K-=3; cnt++;}
    else {cout<<"-1"<<endl; break;}
  }
}
