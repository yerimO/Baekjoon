#include <iostream>
using namespace std;

int main()
{
  int num,sum=0;
  string yerim;

  cin>>num;
  cin>>yerim;

  for(int i=0;i<num;i++)
  {
    sum+=(int)yerim[i]-48;
  }
  cout<<sum<<endl;
}
