#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int dec=117,bin[100],k=3,j;
	bin[k]=dec%2;
	dec=dec/2;
	
	for(j=k-1;j>=0;j--)
	{
	 cout<<bin[j];
	}
    return 0;
}
