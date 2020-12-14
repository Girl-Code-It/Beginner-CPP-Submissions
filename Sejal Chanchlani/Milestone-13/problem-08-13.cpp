
//problem-08-13
#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"enter  string - "<<endl;
	getline(cin,s1);
	for(int i=s1.length()-1;i>=0;i--)
	{
		s2=s2+s1[i];
	}
	cout<<"reversed string - "<<s2<<endl;
}
	
