// PROGRAM TO PRINT ALL EVEN NUMBERS BETWEEN 1 TO 100
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    cout<<"ALL THE EVN NUMBERS BETWEEN 1 TO 100 IS \n";
    while (i<=100)
    {
        if (i%2==0)
            cout<<i<<endl;
        i++;
    }
    return 0;

}
