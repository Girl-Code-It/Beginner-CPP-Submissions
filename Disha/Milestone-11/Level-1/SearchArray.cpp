using namespace std;
#include<iostream>
int main()
{
    int a[10],num,i,flag=0;
     for(i=0;i<10;i++)
    {
        cout<<"Enter a number :";
        cin>>a[i];
    }
    cout<<"\n Enter the number you want to search :";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            cout<<"\n The given number "<<num<<" is present in the list ";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\n The given number "<<num<<" is not present in the list ";
    }
    return  0;
}
