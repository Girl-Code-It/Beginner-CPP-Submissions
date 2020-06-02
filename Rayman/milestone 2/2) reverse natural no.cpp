#include <iostream>
using namespace std;
int main()
{
    int i, n=0; //initialized n for removing the garbage value
    cout<<"enter a number : "<< n;
    cin>> n;
    i=n;             // changes: i=n, i>=1, i--
    while (i>=1)
    {
        cout<< i <<endl;
        i--;
    }
    return 0;
}
