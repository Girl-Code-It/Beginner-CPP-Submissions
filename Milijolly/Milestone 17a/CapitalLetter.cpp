// to find the first capital letter in a string using recursion

#include <bits/stdc++.h>
using namespace std;
char capital(char stng[30], int ctr)
{
    if(isupper(stng[ctr]))
    	return stng[ctr];
    	
   return capital(stng,ctr+1);
}

int main()
{
	char str1[30];
	cin>>str1;
	cout<<capital(str1,0)<<" is the first capital letter";
	//cout<<"Copied String "<<endl;
	//cout<<str2;
}
