/*
Print the multiplication table of 15 using recursion.

*/
#include <iostream>
using namespace std;

void multtable(int a)
{
    if(a == 0) return;
    multtable(a-1);
    cout<<15<<"X"<<(a)<<"="<<(a)*(15)<<endl;
}
int main()
{
    int a;
    cout<<"Enter the number: "; cin>>a;

    multtable(a);
    return 0;
}