#include <iostream>
using namespace std;

int main()
{
  int num,cnt=0;
  cin>>num;
  num=1000-num;

  for(;num!=0;)
  {
    if(num>=500){cnt++; num-=500;}
    else if(num>=100){cnt++; num-=100;}
    else if(num>=50){cnt++; num-=50;}
    else if(num>=10){cnt++; num-=10;}
    else if(num>=5){cnt++; num-=5;}
    else if(num>=1){cnt++; num-=1;}
  }
  cout<<cnt<<endl;
}
