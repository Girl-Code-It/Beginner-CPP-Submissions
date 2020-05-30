/*
4.
Sorting refers to arranging data in a particular format. Sort an array of integers in ascending order.
One of the algorithm is selection sort. Use below explanation of selection sort to do this.
INITIAL ARRAY :
2	3	1	45	15
First iteration :
Compare every element after first element with first element and if it is larger then swap.
In first iteration, 2 is larger than 1. So, swap it.
1	3	2	45	15
Second iteration :
Compare every element after second element with second element and if it is larger then swap.
 In second iteration, 3 is larger than 2. So, swap it.
1	2	3	45	15
Third iteration : Nothing will swap as 3 is smaller than every element after it.
1	2	3	45	15
Fourth iteration : Compare every element after fourth element with fourth element and if it is larger then swap.
In fourth iteration, 45 is larger than 15. So, swap it.
1	2	3	15	45

*/
#include<iostream>
using namespace std;

int main()
{
    int x, y, size=1000, temp;
    int arr[size], tempArr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
        tempArr[x]=arr[x];
    }
    cout<<"\n arr["<<size<<"] = { ";
    for(x=0; x<size; x++)
    {
        cout<<tempArr[x]<<", ";
        for(y=x+1; y<size; y++)
        {
            if(arr[x] > arr[y])
                {
                    temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
        }
    }
    cout<<"}\n";
    cout<<" sorted arr["<<size<<"] = { ";
    for(x=0; x<size; x++)
    {
        cout<<arr[x]<<", ";
    }
    cout<<"}\n";
    return 0;
}
