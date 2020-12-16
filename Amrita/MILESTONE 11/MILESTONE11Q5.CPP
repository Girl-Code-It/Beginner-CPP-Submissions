// PROGRAM TO PRINT SUM AND PRODUCT OF ELEMENTS IN AN ARRAY

#include<iostream>
using namespace std;

int main ()
{
    int arr[10],sum=0,prod=1;
        cout<<"ENTER THE ELEMENTS OF THE ARRAY (10 only) :\n";
    for (int i =0;i<10;i++)
    {
        cin>>arr[i];
                sum+=arr[i];
        prod*=arr[i];


    }




    cout<<"THE SUM AND PRODUCT ARE \t"<<sum<<"\t"<<prod;

}
