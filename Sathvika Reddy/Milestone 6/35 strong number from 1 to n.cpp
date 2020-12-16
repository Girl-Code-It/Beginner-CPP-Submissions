#include<iostream>
using namespace std;
int main(){
int i,n,n1,s1=0,j,k,en, fact;
//long fact ;
cout<<"Enter any number ";
cin>>en;
cout<<"strong numbers from one to entered number are :";
for(k=1;k<=en;k++)
{
	n1=k;
	s1=0;
	for (j=k;j>0;j=j/10)
	{
		fact = 1;
		for (i=1;i<=j%10;i++)
		{ fact = fact * i;
		}
		s1=s1+fact;
	}
	if (s1==n1)
	cout<<n1<<" ";
}

}
