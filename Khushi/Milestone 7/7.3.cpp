//Take 20 integer inputs from user and print the following:
//number of positive numbers
//number of negative numbers
//number of odd numbers
//number of even numbers
//number of 0.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20], pos=0, neg=0, odd=0, even=0, zero=0;
    for(int i=0; i<20; i++){
        cin>>arr[20];
    }
    
        for(int i=0; i<20; i++){
            if(arr[i]>0)
            pos++;

            else if(arr[i]<0)
            neg++;

            else
            zero++;

        }

        for(int i=0; i<20; i++){
            if(arr[i]%2==0)
            even++;

            else
            odd++;
        }

        cout<<"Total positive numbers present: "<<pos<<endl;
        cout<<"Total negative numbers present: "<<neg<<endl;
        cout<<"Total zeroes  present: "<<zero<<endl;
        cout<<"Total even numbers present: "<<even<<endl;
        cout<<"Total odd numbers present: "<<odd<<endl;

        return 0;

    
}
