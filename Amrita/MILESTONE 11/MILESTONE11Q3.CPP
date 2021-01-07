// PROGRAM TO STORE AND DISPLAY SELECTIVE  ELEMENTS IN AN ARRAY
#include<iostream>
using namespace std;

int main ()
{
    int arr[20];
    int neg_num=0,pos_num=0,odd_num=0,even_num=0,num_zero=0;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY (20 only) :\n";
    for (int i =0;i<20;i++)
    {
        cin>>arr[i];

    }

    for (int i =0;i<20;i++)
    {
        if (arr[i]<0)
            neg_num++;
        if (arr[i]>0)
            pos_num++;
        if ((arr[i]%2)==0)
            even_num++;
        if ((arr[i]%2)!=0)
            odd_num++;
        if (arr[i]==0)
            num_zero++;
    }
    cout<<"THE NUMBER OF NEGATIVE NUMBERS IN THE ARRAY ARE \n"<<neg_num<<endl;
    cout<<"THE NUMBER OF POSITIVE NUMBERS IN THE ARRAY ARE \n"<<pos_num<<endl;
    cout<<"THE NUMBER OF ODD NUMBERS IN THE ARRAY ARE \n"<<odd_num<<endl;
    cout<<"THE NUMBER OF EVEN NUMBERS IN THE ARRAY ARE \n"<<even_num<<endl;
    cout<<"THE NUMBER OF ZEROES IN THE ARRAY ARE \n"<<num_zero<<endl;

    return 0;

}

