#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s[200];      // question : to print ony first occurrence of every character if its repeating in the string.
int t;
cin>>t;
while(t--)
{
cin>>s;
for(int i=0;s[i]!='\0';i++)	// traversing string.
{   
	int k=0;
	while(s[k]!=s[i])     //here comparing first element with the remaining elements of the string until it becomes unequal.
	{
		k++;
	}
	if(k==i)             
	cout<<s[i];          // printing first occurrence.
}
cout<<endl;
}
}
