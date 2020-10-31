// PROGRAM TO STORE ODD AND EVEN ELEMENTS OF AN ARRAY IN TWO SEPARATE ARRAYS

#include<iostream>
#define size 100
using namespace std;
int main()
{
    int arr[size],even[size],odd[size],i,j=0,k=0,h=0,length,even_num=0,odd_num=0;
    cout<<"ENTER THE LENGTH OF THE ARRAY\n";
    cin>>length;
    cout<<"ENTER THE ARRAY ELEMENTS\n";
    for (i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nTHE ARRAY ENTERED BY YOU IS \n";
    for (i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }

   while(h<length)
    {
        if(((arr[h])%2)==0)
          {
            even[j]=arr[h];
            even_num++;
            j++;
          }
        else
           {
            odd[k]=arr[h];
            odd_num++;
            k++;
           }
        h++;
    }
    cout<<"\nTHE EVEN ARRAY IS \n";
    for (i=0;i<even_num;i++)
    {
        cout<<even[i]<<"\t";
    }
    cout<<"\nTHE ODD ARRAY IS \n";
    for (i=0;i<odd_num;i++)
    {
        cout<<odd[i]<<"\t";
    }
    return 0;

}
