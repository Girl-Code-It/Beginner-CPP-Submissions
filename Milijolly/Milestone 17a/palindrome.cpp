//Check whether a given String is Palindrome or not
#include <bits/stdc++.h>
using namespace std;
bool palindrome(char str[50],int index)
{
	int len = strlen(str)-1-index;
	if (str[index] == str[len])
	{
		if(index ==len || index +1 ==len)
			return true;
		
	palindrome(str,index+1);
	}
	
	else
	return false;
}

int main()
{
	char str[50];
	cin>>str;
	
	palindrome(str,0) ? cout<<"YES" : cout<<"NO";
}
