
#include<iostream>
using namespace std;
int main ()
{
    int num,fact=1;
    cout<<"ENTER THE NUMBER WHOSE FACTORIAL YOU WANT TO CALCULATE \n";
    cin>>num;
    for (int i=1 ; i<=num ; i++)
    {
      fact=fact* i;
    }
    cout<<"THE FACTORIAL OF THE GIVE NUMBER IS \t"<<fact;
    return 0;
}
