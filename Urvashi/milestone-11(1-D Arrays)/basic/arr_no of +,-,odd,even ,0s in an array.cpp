#include<iostream>
using namespace std;
int main()
{
	int array[20],i;

	cout<<"enter the elements of arrays:";
	for(i=0; i<20; i++)
	cin>>array[i];
		
	int pos=0, neg=0, even=0, odd=0, zero=0;
	
    for(i=0;i<20;i++)
   {	
    if(array[i]>0)
    pos++; 
    
    else if(array[i]<0)
    neg++;
    
    else
    zero++; 
    
    if(array[i]%2==0)
    even++;
    
    else
    odd++;  
    }
    
cout<<"no of positive numbers is="<<pos<<endl;
cout<<"no of negative numbers is="<<neg<<endl;
cout<<"no of zeroes is="<<zero<<endl;
cout<<"no of even numbers is="<<even<<endl;
cout<<"no of odd numbers is="<<odd<<endl;
}

