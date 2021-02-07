//q17- wap to count the frequency of each element in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[100],f[100],i,j,s=0,n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout<<"Enter "<<n<<" elements in the array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		s=1;
		if(a[i]!=-1){
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{s++;
			a[j]=-1;
		    }
	    }
	f[i]=s;
	}
	}
	for(i=0;i<n;i++){
	if(a[i]!=-1){
		{
		cout<<"Frequency of "<<a[i]<<" is "<<f[i]<<endl;
	    }
	}
}
}
