#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char s[100];
  cin>>s;
  int cnt=1,c=0;
  for(int i =0;i<strlen(s);i++){
    if (s[i]=='S'){cnt+=1;}
    else{
      c+=1;
      if(c==2){c=0; cnt+=1;}}
  }
  if (cnt>=n) cout<<n<<endl;
  else cout<<cnt<<endl;
}
