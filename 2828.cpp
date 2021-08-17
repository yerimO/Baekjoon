#include <iostream>
using namespace std;

int main()
{
  int N,M;
  cin>>N>>M;
  int a=1,b=M;
  int j;
  cin>>j;

  int yerim=0;
  for (int i=0;i<j;i++){
    int num;
    cin>>num;
    if (a<=num && b>=num){continue;}
    if(a>num){ yerim+=a-num; b-=a-num; a=num;}
    else{ yerim+=num-b;a+=num-b;b=num;}
  }
  cout<<yerim;
}
