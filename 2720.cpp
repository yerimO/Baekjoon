#include <iostream>
using namespace std;


void c(int a)
{
  int Q,D,N,P;
  int n;
  Q=a/25;
  n=a%25;
  D=n/10;
  n=n%10;
  N=n/5;
  n=n%5;
  P=n/1;
  cout<<Q<<" "<<D<<" "<<N<<" "<<P<<endl;

}
int main()
{
  int T;
  int num;
  cin>>T;
  for(int i=0;i<T;i++)
  {
    cin>>num;
    c(num);
  }
}
