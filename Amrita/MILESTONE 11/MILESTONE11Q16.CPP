// TO DELETE DUPLICATE  ELEMENTS OF THE ARRAY


#include<iostream>
#define size 100
using namespace std;

int main()
{
    int arr[size],length,i;
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
    for ( i=0;i<length;i++)
    {

        for(int j=i+1;j<length;j++)
        {
         if (arr[i]==arr[j])
           {
             while (j<length)
               {
                  arr[j]=arr[j+1];
                  j++;
               }
               --length;

        }
      }

    }
    cout<<"\nThe elements are  :";

    for (int i=0;i<length;i++)
    {

            cout<<arr[i]<<"\t";

    }
return 0;
}


