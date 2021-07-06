#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
  /////////////////변수 선언//////////////
  char num[350000];
  ////////////////8진수 입력//////////////
  cin>>num;
  //////////////8진수 길이////////////////
  if(num[0]=='0')
  {
  	cout<<"0\n"<<endl;
  	return 0;
  }


  int a=strlen(num);
  bool flag = false;
  for(int i=0;i<a;i++)
  {
    int num_8[4]={4,2,1};
    int a=num[i]-48; //a에 문자를 숫자로 바꾼 수를 넣는다.

    for(int k=0;k<3;k++)
    {
      if(a>=num_8[k]){
        a=a-num_8[k];
        num_8[k]=1;
        flag = true;
        cout<<num_8[k];
		}
      else{
      	  if(flag == true)
          {
          	num_8[k]=0;
          	cout<<num_8[k];
		  }
			}
		}
	}
}
