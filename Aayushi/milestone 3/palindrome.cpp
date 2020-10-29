#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
  long long int oldnum=0 ,num=0 ,ld=0, rev=0;
    cout<<"enter a number : "<< oldnum<<endl;
    cin>> oldnum;
    num=oldnum;
     while (num>0)
    {
        ld=num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    cout<<"reverse : "<<rev<<endl;
    if (rev==oldnum)
    {
        cout<<"it is a palindrome.";
    }
    else  { cout<<"it is not a palindrome."; }
    return 0;
}
