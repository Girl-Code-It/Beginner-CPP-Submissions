//30
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
	   for(j=1;j<=3;j++)
	   {
	   	 if(j<=i-4&&i>=5&&i<=7)
	   	 {
	   	 	cout<<"*";
		 }else if(j<=10-i&&i>7)
		 {
		 	cout<<"*";
		 }else
		 {
		 	cout<<" ";
		 }
	   }
	   for(j=3;j<=5;j++)
	   {
	   	if(j==3&&i==4||j==3&&i==5||j==3&&i==6)
	   {
	   	cout<<"|";
	   }else if(j>=6-i&&i<3)
	   	{
	   	  cout<<"*";	
		}else if(i<=j&&i>=3&&i<=5)
		{
			cout<<"*";
		}else
		{
			cout<<" ";
		}
	   }
	   cout<<endl;	
	}	
}
