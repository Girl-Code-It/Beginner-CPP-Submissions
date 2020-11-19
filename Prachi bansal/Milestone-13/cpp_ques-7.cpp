#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	cout<<"Enter the stirng: ";
	getline(cin,s1);
	cout<<"Enter the substring: ";
	cin>>s2;
	int i=s1.find(s2);
	cout<<"Substring find at index: "<<i;
	return 0;
}
