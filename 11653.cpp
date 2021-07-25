#include <iostream>
using namespace std;

int ss(int i) //소수 판별 함수
{
  int cnt=0;
  for(int k=2;k<=i;k++)
  {
    if(i%k==0)
      ++cnt;
    if(cnt>=2)
      break;
    }
  if(cnt==1)
    return 1;
}
int main()
{
  int n,s;
  cin>>n;


  for(int i=2;;){
    s=ss(i);
    if(s==1&&n%i==0){
      cout<<i<<endl;
      n=n/i;}
    else ++i;
    if(n==1)
      break;
  }
   return 0;
}
