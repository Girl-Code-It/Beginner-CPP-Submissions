#include <iostream>
using namespace std;
int main()
{
    int ch,ca;
    cout<<"classes held:";
    cin>>ch;
    cout<<"classes attended:";
    cin>>ca;
    float percentage=(ca/ch)*100;
    if(percentage>75)
        cout<<"y";
    else
        cout<<"n";
    return 0;
}
