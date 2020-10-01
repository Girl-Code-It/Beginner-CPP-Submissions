#include <iostream>

using namespace std;

int main()
{
    int num,i=1,x=1;

    cout<< "Enter a number to find its factorial\n";
    cin>>num;

    while(i<=num)
    {
        x = i*x;
        i++;

    }

    cout<< "The factorial is :\n" <<x;

    return 0;
}
