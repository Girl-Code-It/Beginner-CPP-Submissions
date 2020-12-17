#include <iostream>

using namespace std;

int main()
{
    int a; cin>>a;
    string check = a&1 == 0 ? "Even" : "Odd";
    cout<<check;
    return 0;
}