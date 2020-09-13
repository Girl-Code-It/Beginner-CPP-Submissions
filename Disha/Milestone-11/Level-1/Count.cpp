using namespace std;
#include<iostream>
int main()
{
    int i,a[20],positive,negative,zero,even,odd;
    positive=negative=zero=odd=even=0;
      for(i=0;i<20;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(a[i]<0)
            negative++;

        else if(a[i]>0)
            positive++;

        else
            zero++;
    }
    cout<<"\n Number of 0 ="<<zero;
    cout<<"\n Positive numbers ="<<positive;
    cout<<"\n Negative numbers ="<<negative;
    cout<<"\n Even numbers ="<<even;
    cout<<"\n Odd numbers ="<<odd;
    return 0;
}
