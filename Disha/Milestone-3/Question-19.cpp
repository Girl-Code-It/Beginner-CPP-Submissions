//Write a C program to enter a number and print it in words.

using namespace std;
#include<iostream>
#include<stdio.h>
#include<math.h>
int main()
{
    int n, num;
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"\n Enter a number :";
    cin>>num;
    int digit=(int)log10(num);
    do{
        n=num/pow(10,digit);
        num=num%((int)round(pow(10, digit)));
        cout<<"\t"<<arr[n];
        digit--;
    }while(digit!=0);
    cout<<"\t"<<arr[num];
    return 0;
}
