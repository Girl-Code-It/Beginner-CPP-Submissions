#include <iostream>
using namespace std;

int main()
{
    int num,n1,n2,n3,n4;
    cout<<"\n Enter a 4 digit number: ";
    cin>>num;
    n1=num%10;
    n2=(num/10)%10;
    n3=(num/100)%10;
    n4=(num/1000)%10;

    cout<<"\n The reversed number is: "<<(n1*1000)+(n2*100)+(n3*10)+n4;
}
