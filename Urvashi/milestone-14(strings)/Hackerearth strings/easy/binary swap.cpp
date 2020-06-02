#include<bits/stdc++.h>
using namespace std;
int main()
{                       //question : to convert one binary string into another by applying operations of swaping. to claculate the no of operations .
char a[100001];
char b[100001];
cin>>a;
cin>>b;
int c=0;
for(int i=0;i<strlen(a);i++) //traversing strings.
{
if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1'))  //if finding 1 in one string and 0 in another and vice versa. count++ .
{
c++;
}
}
if(c%2==0) // if no of swapping is even then only we can convert one string into other otherwise not.
{
cout<<c/2<<endl; //dividing swapping by 2 becoz swapping two numbers is counted to be 1 swapping .
}
else
{
cout<<-1<<endl;
}
}
