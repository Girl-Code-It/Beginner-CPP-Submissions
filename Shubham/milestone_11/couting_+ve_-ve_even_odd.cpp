#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{


    int n, arr[10], even=0, odd=0, positive=0, negative=0, zero=0;

    for(int i=0; i<10; i++)
    {
        cout << "Enter the value of element No " << i << " :  ";
        cin >> arr[i];
    }

    //loop to count positive and negative

    for(int i=0; i<10; i++)
    {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] <0)
            negative++;
    }

    //loop to count even and odd

    for(int i=0; i<10; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    //loop to count zeros

    for(int i=0; i<10; i++)
    {
        if(arr[i] == 0)
            zero++;
    }

    cout << "Numbe of Positive Integers : " << positive << endl;
    cout << "Number of Negative Integers : " << negative << endl;
    cout << "Number of Even Numbers : " << even << endl;
    cout << "Number of Odd Numbers : " << odd << endl;
    cout << "Number of Zeros : " << zero << endl;
    
   

  
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

