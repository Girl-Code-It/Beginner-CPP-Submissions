//program to reverse a string using recursion.
#include <bits/stdc++.h>
using namespace std;
void rev(string str)
{
	if(str.size()==0)
		return;
		
	rev(str.substr(1));
	cout<<str[0];
}

int main()  
{  
    string a = "Jolly";  
    rev(a);  
    return 0;  
}  
