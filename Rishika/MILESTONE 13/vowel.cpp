//vowel phobia
#include<iostream>
#include<string>
using namespace std;
int main()
{   int t;
    cin>>t;
	while(t--){
	string s;
	int i,c=0;
    cin>>s;
	for(int i=0;i<s.length();i++)
	{   
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		c++;
	}
	cout<<c<<endl;
}
}
