#include <iostream>

using namespace std;

int main()
{
    int testCases; cin>>testCases;

    while(testCases-->0)
    {
    string str, rev; cin>>str;

    for(int i = 0; i < str.length(); i++)
    rev += str[str.length() - 1 - i];

    if(rev == str) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}