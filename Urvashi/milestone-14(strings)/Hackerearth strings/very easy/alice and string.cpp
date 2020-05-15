#include<iostream>
#include<string>
using namespace std;
bool find(string a, string b)
{
int len =a.length(),len1=b.length(); //in this program we have to check that after performing some operatios ca we convert a strig into another. if yes then print
if(len!=len1)                        //yes if no then print no.
return false;                        //so for doing this. in find fxn we are checking that length of both strings is equal or not if not bool false.
int d[len]={0};                      //because we cnnot covert a string into another if both have diff size.
d[0]=b[0]-a[0];                      //but if they are having same size then store the diff of first letters in d variable
for(int i=0;i<len;i++)
{
	if(a[i]>b[i])                    //here we are checking that b should have letter greater then a so that we add some ascii value in a to convert it into b.
	return false;                    //and also store the diff in the ascii value of each index of a and b into d.
	else
	d[i]=b[i]-a[i];
}
for(int i=0;i<len-1;i++)
{
	if(d[i]<d[i+1])                 //here if the diff in the ascii value of i+1 is greater then i. then we cnnot convert a into b becoz the operations are starting
	return false;                   //from starting index.
}
return true;
}
int main()
{
string a;
string b;
cin>>a;                            //here if find fxn is true then print yes else print no. 
cin>>b;
if(find(a,b))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
 
}
