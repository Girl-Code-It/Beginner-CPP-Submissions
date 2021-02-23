#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    if(num>0)
    {
        cout<<"positive ";
    }else if(num<0){
        cout<<"negative ";

    }else{
        cout<<"zero";
    }
    return 0;
}