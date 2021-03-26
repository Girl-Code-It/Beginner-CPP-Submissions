#include<bits/stdc++.h>
using namespace std;

int main() 
{	
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n);
	 int sum_min = 0,sum_max = 0;

    for(int i = 0,j = 1; i<n-1; i++,j++){

        sum_min+=a[i];
        sum_max+=a[j];

    }
    cout<<sum_min<<" "<<sum_max<<endl;	
}
	
