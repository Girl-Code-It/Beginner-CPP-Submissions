/*
 *Fibonacci series is a series of numbers where the current number is the sum of previous two terms.
 *For Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, ... , (n-1th + n-2th)
 */
#include <iostream>
using namespace std;
int main()
{
    int en, n, first=0, second=1, next=2 ;
    cout<<"enter the number of terms : "<<endl;
    cin>>en;
    cout<<"printing fibonacci series upto "<<en<<"terms :"<<endl;
    for(n=0; n<en; n++)
    {
        if(n<=1)
            next=n;
        else
        {   next = first+second;
            first = second;
            second = next;
        }
        cout<<"--> "<<next<<endl;
    }
}
