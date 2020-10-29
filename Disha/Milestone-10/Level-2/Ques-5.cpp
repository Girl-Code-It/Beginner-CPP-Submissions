using namespace std;
#include<iostream>
#include<math.h>

int power(int a,int b)
{
    return (pow(a,b));

}
int main()
{
    int num,exp;
    cout<<"\n Enter the number :";
    cin>>num;
    cout<<"\n Enter the exponent :";
    cin>>exp;
    cout<<"\n Result ="<<power(num,exp);
    return 0;
}
