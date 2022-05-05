#include<iostream>
using namespace std;
string copystring(string s1,int index,int size)
{
	static string s2="";
	if(index>=size)
	{
		return s2;
	}
	else
	{
		s2=s2+s1[index];
		copystring(s1,index+1,size);
	}
	return s2;
}
int main()
{
	string s1;
	cout<<"enter string"<<endl;
	cin>>s1;
	string s=copystring(s1,0,s1.size());
	cout<<"copied string - "<<s;
}
