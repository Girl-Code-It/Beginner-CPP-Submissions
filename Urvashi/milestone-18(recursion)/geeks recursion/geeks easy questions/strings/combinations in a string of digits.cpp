#include<iostream>
#include<string.h>
using namespace std;
void combinations(char *a,int n,int len )
{
	char substr[50];
	for(int i=0;i<=n-len;i++)
	{
		int k=0;
		for(int j=i;j<=i+len-1;j++)
		{
			substr[k]=a[j];
			k++;
		}
		substr[len]='\0';
		cout<<substr<<endl;
		}	
	combinations(a,n,len+1);	
}
int main()
{
char a[50];
cin>>a;
combinations(a,strlen(a),1);
}
