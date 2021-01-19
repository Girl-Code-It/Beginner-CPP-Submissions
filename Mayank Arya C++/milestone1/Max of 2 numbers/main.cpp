#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "Enter two integers" << endl;

    cin>>a;
    cin>>b;

    if(a>b){
        cout<< a << " is the greater integer";
    }
else {
    cout<< b << " is the greater integer";
}

return 0;
}
