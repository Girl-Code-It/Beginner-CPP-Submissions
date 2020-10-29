#include <iostream>
using namespace std;
int main()
{
    int st=0, en=0, ascii;
    cout<<"input the starting ASCII value : "<<st<<endl;
    cin>>st;
    cout<<"input the ending ASCII value : "<<en<<endl;
    cin>>en;
    if(st<=0 || st>=255)
        st=0;
    if(en<=0 || en>=255)
        en=255;
    for(ascii=st; ascii<=en; ascii++)
    {
        cout<<"ASCII value of "<<char(ascii)<<" : "<<ascii<<endl;
    }
    return 0;
}
