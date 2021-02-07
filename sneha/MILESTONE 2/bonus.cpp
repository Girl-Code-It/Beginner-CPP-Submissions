#include <iostream>
using namespace std;
int main()
{
    float salary;
    int years;
    cout<<"enter salary:"; cin>>salary;
    cout<<"enter years:"; cin>>years;
    if(years>5)
        cout<<"net salary"<<" "<<salary+0.5*salary;
    return 0;
}
