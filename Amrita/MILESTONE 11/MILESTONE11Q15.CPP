// TO COUNT DUPLICATE ELEMENTS IN AN ARRAY

#include<iostream>
#define size 100
using namespace std;

int main()
{
    int arr[size],freq[size],count=1,length;
cout<<"Enter the length of the array \n";
cin>>length;
cout<<"Enter the elements of the array\n";
for (int i=0;i<length;i++)
    {
       cin>>arr[i];
    }

   cout<<"The array is\n";
    for (int i=0;i<length;i++)
    {
       cout<<arr[i]<<"\t";
    }
    for (int i=0;i<length;i++)
    {

        for(int j=i+1;j<length;j++)
        {
         if (arr[i]==arr[j])
           {
             count++;
             break;

           }


        }

    }


    cout<<"\nThe number of duplicate elements are "<<count;
return 0;
}
