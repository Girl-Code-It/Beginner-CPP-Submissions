//program to copy One string to another using recursion
#include <bits/stdc++.h>
using namespace std;
void copyString(char stng1[30], char stng2[30], int ctr)
{
    stng2[ctr] = stng1[ctr];
    if (stng1[ctr] == '\0')
        return;
    copyString(stng1, stng2, ctr + 1);
}

int main()
{
	char str1[30],str2[30];
	cin>>str1;
	copyString(str1,str2,0);
	cout<<"Copied String "<<endl;
	cout<<str2;
}
