#include <iostream>
using namespace std;

int main()
{
	int T,k,n;
	int num[15][15]={0}; //아파트 선언 및 초기화

	cin>>T; //테스트 케이스 개수 입력

  for(int i=0;i<15;i++){num[0][i]=i+1;} //0층

  for(int i=1;i<15;i++) //층
    for(int j=0;j<15;j++) //호
      for(int k=0;k<=j;k++)
        num[i][j]+=num[i-1][k];


/////테스트 케이스 개수 만큼 입력 and 출력 ////////
  for(int i=0;i<T;i++){
    cin>>k>>n; //입력
    cout<<num[k][n-1]<<endl;} //출력
	return 0;
}
