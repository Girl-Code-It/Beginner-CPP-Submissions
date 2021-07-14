//program to multiply two matrix using recursion ki * jk +
#include <bits/stdc++.h>
using namespace std;
int rone,cone,rtwo,ctwo;
#define MAX 10
int c[3][3];
void multiplyMatrix(int arm[MAX][MAX],int brm[MAX][MAX])
{
	static int sum,i=0,j=0,k=0;
    if(i<rone)
    {
	    if(j<ctwo)
	    {  
	         if(k<cone)
	         {
	             sum=sum+arm[i][k]*brm[k][j];
	             k++;
	             multiplyMatrix(arm,brm);
	         }
	         c[i][j]=sum;
	             sum=0;
	             k=0;
	             j++;
	             multiplyMatrix(arm,brm);
	    }
	    j=0;
	    i++;
	    multiplyMatrix(arm,brm);
    }
}

int main()
{
	int a[MAX][MAX],b[MAX][MAX];
	cin>>rone>>cone>>rtwo>>ctwo;
	
	for(int i=0;i<rone;i++)
		for(int j=0;j<cone;j++)
			cin>>a[i][j];
	
	for(int i=0;i<rtwo;i++)
		for(int j=0;j<ctwo;j++)
			cin>>b[i][j];
	
	multiplyMatrix(a,b);
	
	for(int i=0;i<rone;i++)
	{
			for(int j=0;j<ctwo;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
}
