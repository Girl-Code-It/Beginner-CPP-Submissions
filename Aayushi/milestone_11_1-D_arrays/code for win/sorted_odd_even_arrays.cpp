#include<iostream>
using namespace std;

int main()
{
    int i, j, size=1000, size1=0, size2=0, temp, choice;
    int arr[size], newArr1[size], newArr2[size];

    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the arrays : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
        if(arr[i]%2==0)
        {
            newArr1[size1]=arr[i];
            size1++;
        }
        else
        {
            newArr2[size2]=arr[i];
            size2++;
        }
    }
    cout<<"}\n";

    cout<<"\nChoose the order : \n 1. Ascending order \n 2. Descending order \n";
    cout<<"Choice : ";
    cin>>choice;

    cout<<"\n Even numbers : array1 ["<<size1<<"] = { ";
    for(i=0; i<size1; i++)
    {
        for(j=i+1; j<size1; j++)
        {
            if(choice==1)
            {
                if(newArr1[i] > newArr1[j])
                {
                    temp = newArr1[i];
                    newArr1[i] = newArr1[j];
                    newArr1[j] = temp;
                }
            }
            else if (choice==2)
            {
                if(newArr1[i] < newArr1[j])
                {
                    temp = newArr1[i];
                    newArr1[i] = newArr1[j];
                    newArr1[j] = temp;
                }
            }
            else
            {
                cout<<"Invalid choice...";
                break;
            }
        }
        cout<<newArr1[i]<<", ";
    }
    cout<<"}\n";

    cout<<"\n Odd numbers : array2 ["<<size2<<"] = { ";
    for(i=0; i<size2; i++)
    {
        for(j=i+1; j<size2; j++)
        {
            if(choice==1)
            {
                if(newArr2[i] > newArr2[j])
                {
                    temp = newArr2[i];
                    newArr2[i] = newArr2[j];
                    newArr2[j] = temp;
                }
            }
            else if (choice==2)
            {
                if(newArr1[i] < newArr2[j])
                {
                    temp = newArr2[i];
                    newArr2[i] = newArr2[j];
                    newArr2[j] = temp;
                }
            }
            else
            {
                cout<<"Invalid choice...";
                break;
            }
        }
        cout<<newArr2[i]<<", ";
    }
    cout<<"}\n\n";

    return 0;
}
