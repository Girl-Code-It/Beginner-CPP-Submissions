#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	cout<<"Enter the upto which odd values have to found"<<endl;
	cin>>n;
	while(i<=n)
    {
    	if(i%2!=0)
    	cout<<i<<endl;
    	i++;
		}	
		return 0;
		
}
