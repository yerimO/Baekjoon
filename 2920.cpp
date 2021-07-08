#include<iostream>
using namespace std;

int main()
{
	int um[8];
	int cnt=0,cnt2=0;
	for(int i=0;i<8;i++)
	{
		cin>>um[i];
		if(um[i]==i+1)
			cnt++;
		else if(um[i]==8-i)
			cnt2++;
	}
	if(cnt==8)
		cout<<"ascending"<<endl;
	else if(cnt2==8)
		cout<<"descending"<<endl;
	else
		cout<<"mixed"<<endl;
}
