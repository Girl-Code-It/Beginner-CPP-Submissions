// TO PRINT UNIQUE ELEMENTS OF THE ARRAY


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
        count=1;
        for(int j=i+1;j<length;j++)
        {
         if (arr[i]==arr[j])
           {
             count++;
             arr[j]=-1;
           }

        }
             freq[i]=count;
    }
    cout<<"\nThe unique elements are  :";

    for (int i=0;i<length;i++)
    {
        if(arr[i]!=-1)
        {
            cout<<arr[i]<<"\t";
        }
    }
return 0;
}

