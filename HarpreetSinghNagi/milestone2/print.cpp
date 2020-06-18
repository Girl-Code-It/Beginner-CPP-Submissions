//print nos of digits and its sum
#include<iostream>

using namespace std;

int main()
{
	int n,count{0},rem{0},sum{0};
	cout<<"enter n";
	cin>>n;

	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
		count++;
		
	}

	cout<<count<<endl;
	cout<<sum;
	

	return 0;
}