#include<iostream>
using namespace std;
void print_array(int *a,int start,int n)
{
	if(start>=n )
	return ;
	cout<< "a["<<start<<"]"<<":"<<a[start]<<endl; 
    return print_array(a,start+1,n) ;
}
    int main()
{
	int num;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++)
	cin>>a[i];
    cout<<"array elements are:"<<endl;
    print_array(a,0,num) ;
}
