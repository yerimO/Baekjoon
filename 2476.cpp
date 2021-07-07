#include <iostream>
using namespace std;

int main()
{
  int N;
  int num[3];
  int max=0,m=0,sum=0;

  cin>>N; //참여하는 사람 수

  for(int i=0;i<N;i++)
  {
      sum=0;
      cin>>num[0]>>num[1]>>num[2];

      ////// 세 수가 모두 동일하면 수행하는 조건문////////
      if((num[0]==num[1])&&num[1]==num[2]){sum=10000+(num[0]*1000);}

      ///// 세 수 중 두 수가 같은 경우 수행하는 조건문/////
      else if(num[0]==num[1]||num[0]==num[2]){sum=1000+(num[0]*100);}
      else if(num[2]==num[1]){sum=1000+(num[1]*100);}

      ////// 세 수가 모두 다를 때 수행하는 조건문//////
      else {
        for(int k=0;k<3;k++)
        {
          if(m<num[k])
            m=num[k];
        }
        sum=m*100;
      }

    if(max<sum)
      max=sum;
  }
  cout<<max<<endl;
}
