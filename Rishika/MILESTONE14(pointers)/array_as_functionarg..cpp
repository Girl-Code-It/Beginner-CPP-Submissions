//array as function argument
/*#include<iostream>
using namespace std;
int sumofelements(int a[])
{
	int i,sum=0;
	int size=sizeof(a)/sizeof(a[0]);
	cout<<"sizeof(a)"<<sizeof(a)<<"sizeof(a[0])"<<sizeof(a[0])<<endl;
	cout<<"size in sumofel="<<size<<endl;
	for(i=0;i<size-1;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int a[]={1,2,3,4};
	int total=sumofelements(a);
	int s=sizeof(a)/sizeof(a[0]);
	cout<<"size in s="<<s;
}
*/
#include<iostream>
using namespace std;
int Double(int a[],int size)
{
	int i;
	size=sizeof(a)/sizeof(a[0]);
	cout<<"size="<<size<<endl;
	cout<<"sizeof(a)="<<sizeof(a)<<endl;
	cout<<"sizeof(a[0])"<<sizeof(a[0]);
	for(i=0;i<size;i++)
	{
		a[i]=2*a[i];
	}
}
int main()
{
	int a[5]={1,2,3,4,5},size;
	Double(a,size);

}
