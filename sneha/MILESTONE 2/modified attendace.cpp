#include <iostream>
using namespace std;
int main()
{
    int ch,ca; char h;
    cout<<"classes held:";
    cin>>ch;
    cout<<"classes attended:";
    cin>>ca;
    float percentage=(ca/ch)*100;
    if(percentage>75)
        cout<<"y";
    else
       {

        cout<<"do you have medical cause?";cin>>h;
        if(h=='y')
            cout<<"y";
        else cout<<"n";}
    return 0;
}
