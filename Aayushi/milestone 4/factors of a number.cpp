#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0, i;
    cout<<"enter a number : "<<endl;
    cin>>num;
    cout<<" factors of "<<num<<" are : ";
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            cout<<i<<", ";
        }
    }
    return 0;
}
