#include<iostream>
#include<math.h>
#include<string.h>              // we have to tell input string is sumit string or not . if yes print yes else print no.
using namespace std;            // sumit string is a strng which contains every letter adjacent either clockwise ir anticlockwise. like az or mno.
int adjacent(int a, int b)
{
	if((a==122&&b==97)||(a==97&&b==122))   //in adjacent fxn we are checking that all the characters in the string are adjacent or not.
	return 1;                              //if adjacent then diff in ascii value will be 1 . so return 1.
	else
	return abs(a-b);                       //if not adjacent then return the absolute diff in their ascii values.
}
int main()
{   char s[1000];
	int i,j, x,t;
	cin>>t;
while(t--)
{
	cin>>s;
	int k=0;
		for(int i=0;s[i+1]!='\0';i++)     // traversng the whole string .
		{
			if((adjacent(s[i],s[i+1]))!=1)  //checking characters adjacent or not.
            k=1;
    }
    if(k==0) 
    cout<<"YES"<<endl;    //if adjacent print yes
    else 
    cout<<"NO"<<endl;     //else no.
}
}
