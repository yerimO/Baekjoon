#include <iostream>
using namespace std;

int main()
{
  int num;
  int a=0,b=0,c=0;
  cin>>num;
  for(;num!=0;){
    if(num%10<10&&num%10>0){cout<<"-1"<<endl; break;}
    if(num>=300){a++; num-=300;}
    else if(num>=60){b++; num-=60;}
    else if(num>=10){c++; num-=10;}
  }
  if(num==0){ cout<<a<<" "<<b<<" "<<c<<endl;}
}
