#include <iostream>
using namespace std;

int main()
{
	//8*8 체스판 
	char num[8][8]={0};
	//체스판 입력
	for (int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>num[i][j];
		} 
	}
	int cnt=0;
	
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			if(i%2==0){
				if(j%2==0){ if(num[i][j]=='F'){cnt++;}}
			}
			else{
				if(j%2==1){if(num[i][j]=='F'){cnt++;}}
			}
		}
	}
	cout<<cnt<<endl;
}


