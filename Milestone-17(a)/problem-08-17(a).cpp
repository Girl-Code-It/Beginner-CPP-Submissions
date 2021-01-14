#include<iostream>
using namespace std;
int func(int arr[],int index,int size,int &max)
	{
    if(index < size)
    {
         if(max<arr[index])
           max=arr[index];
      
      func(arr,index+1,size,max);//calling the function MaxElem itself to compare with further element
    }
    return max;
}
int main()
{
	int arr[]={1,2,5,3,4,10};
	cout<<" max element - "<<func(arr,0,6,arr[0]);
}
