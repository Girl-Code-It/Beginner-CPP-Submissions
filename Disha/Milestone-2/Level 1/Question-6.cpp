//Take input of age of 3 people by user and determine oldest and youngest among them.
using namespace std;
#include<iostream>
int main()
{
    int p1,p2,p3;
    cout<<"\n Enter age of 3 people :";
    cin>>p1>>p2>>p3;

    if(p1>p2 &&p1>p3){
            cout<<"\n Oldest is:"<<p1;
    }
    else if(p2>p3)
    {
        cout<<"\n Oldest is:"<<p2;
    }
    else{ cout<<"\n Oldest is:"<<p3;}
    cout<<"\n Youngest is:";

    if(p1<p2 &&p1<p3){
            cout<<p1;
    }
    else if(p2<p3)
    {
        cout<<p2;
    }
    else{ cout<<p3;}

    return 0;
}
