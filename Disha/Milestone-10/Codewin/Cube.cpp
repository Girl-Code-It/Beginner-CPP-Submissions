using namespace std;
#include<iostream>
#include<math.h>
int cube(int num)
{
    return pow(num,3);
}

int main()
{
    int num;
    cout<<"\n Enter the number :";
    cin>>num;
    cout<<"\n Cube of "<<num<<" is :"<<cube(num);
    return 0;
}
