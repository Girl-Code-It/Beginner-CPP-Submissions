//string class in c
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="RISHIKA";
	string s2=" SHARMA";
	string s3;
	string s4;
	int len,lens;
	
	s4=s3; 
	
	//copying
	s3=s2;
	cout<<"s3= "<<s3<<endl;
	
	//concatenation 
	s3=s1+s2;
	cout<<"s1+s2= "<<s3<<endl;
	
	//length after concatenation
	len=s3.size();
	cout<<"size of s3 after concatenation= "<<len<<endl;
	
	//length before concatenation
	lens=s4.size();
	cout<<"length before concatenation= "<<lens<<endl;
}
