//DNA pride
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,temp;
	cin>>t;
	if(t>=1&&t<=10000)
	{while(t--)
	{   
		int n;
		cin>>n;
		if(n>=1&&n<=1000000){
					string s;
		cin>>s;
		for(i=0;i<n;i++){
			if(s[0]!='A'&&s[0]!='T'&&s[0]!='C'&&s[0]!='G')
		{cout<<"Error RNA nucleobases found!";
		break;
		}else
		{
			switch(s[i]){
				case 'A':
					cout<<'T';
					break;
				case 'T':
					cout<<'A';
					break;
				case 'G':
					cout<<'C';
					break;
				case 'C':
					cout<<'G';
					break;
			}
		}
		}
		}cout<<endl;
	}
	}
}
