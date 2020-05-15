#include<iostream>
using namespace std;

int main()
{
	int  i, size ,a[100], iselement, found;
	
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	
	cout<<"enter the elements on the array:";
	for(i=0; i<size;i++)
	cin>>a[i];
		
    cout<<"enter the element to search :"<<endl;
    cin>>iselement;
    
    found=0;
    for(i=0;i<size;i++)
    {
    	if(a[i]==iselement)
        {
		found=1;
    	break;
		}
	}
	
	if(found==1)
	cout<<"the postion of the element is="<<i+1<<endl;
	else
	cout<<"element not found";
}
