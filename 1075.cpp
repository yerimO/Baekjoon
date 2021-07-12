#include <iostream>
using namespace std;

int main()
{
  // 나누기 할 값
  int N,F;
  cin>>N>>F;

  int a;
  a=N%100;//뒤에 두 자리 추출
  N=N-a; // 뒤에 두 자리 00으로 만든다.
  a=N; // a에 00으로 바꾼 N 값을 넣는다.

  for(int i=0;i<=F;i++)
  {
    N=a+i;
    if(N%F==0){ // N을 F로 나누었을 때 0이 나오면 수행하는 조건문
      if(i<10){ cout<<"0"<<i<<endl;}
      else{cout<<i<<endl;}
      break;
    }
  }

}
