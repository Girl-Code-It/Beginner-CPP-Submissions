#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0, i=1, factorial=1;
    cout<<"enter a number : "<<endl;
    cin>>num;
    cout<<" --> "<<num<<"! = ";
    for(i=1; i<=num; i++)
    {
        factorial*=i;
    }
    cout<<factorial;
    return 0;
}
