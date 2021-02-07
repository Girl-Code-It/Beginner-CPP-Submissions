//q5- wap to print fibonacci series upto n terms.
#include<iostream>
using namespace std;
int main()
{
	int n,i,first=0,second=1,next;
	cout<<"Enter the number of terms- ";
	cin>>n;
	cout<<"Fibonacci series for "<<n<<" terms- "<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<first<<endl;
		next=first+second;
		first=second;
		second=next;
	}
}
