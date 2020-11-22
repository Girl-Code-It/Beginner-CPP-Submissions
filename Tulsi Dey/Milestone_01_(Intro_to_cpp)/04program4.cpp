#include <iostream>

using namespace std;

int main()
{
    int a ; cin>>a;

    string s = a == 0? "Zero" : a > 0 ? "Positive" : "Negative";
    cout<<s;
    return 0;
}