//string division
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	if(t>=1&&t<=100){
		while(t--)
		{
		if(n>=1&&n<=1000){
			string s;
			cin>>s;
			int n=s.length();
			if(n<=7){
			if(n%2==0)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;	
			}else{
				cout<<"YES"<<endl;
			}
		}
		}
	}
}
