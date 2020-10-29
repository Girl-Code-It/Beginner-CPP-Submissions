#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int num=0, ld=0, rev=0;
    cout<<"enter a number : "<< num<<endl;
    cin>> num;
     while (num>0)
    {
        ld=num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    cout<<"reverse : "<<rev<<endl;
    return 0;
}
