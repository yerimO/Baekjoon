#include<iostream>
using namespace std;

int main()
{
	int num,numl;
	int one,two;
	int sum=0,count=0;
	
	cin>>num;
	int first=num;
	for(;;){
		count++;
		one=num/10;
		two=num%10;
		sum=one+two;
		numl=(two*10)+(sum%10);
		num=numl;
		if(first==numl)
			break;
		}
		cout<<count<<endl;
}
