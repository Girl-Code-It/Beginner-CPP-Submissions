//binary string
#include<iostream>
#include<string>
using namespace std;
int main()
{   int t;
    cin>>t;
    if(t>=1&&t<=10){
    	while(t--){
		int n;
    	cin>>n;
    	if(n>=1&&n<=100){
    string a;
	cin>>a;
	int i,j,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='1')
		{
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[j]=='1')
				count++;
			}
		}
		
	}
	if(count>0)
	cout<<count<<endl;
	else
	cout<<"0"<<endl;	
		}	
		}
	}
}
