#include <iostream>
using namespace std;
int cube(int num);

int main()
{
    int num;
    cout<<"input a number : ";
    cin>>num;
    cout<<"cube of "<<num<<" : "<<cube(num);
}
int cube(int num)
{
    return(num*num*num);
}
