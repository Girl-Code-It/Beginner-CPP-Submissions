#include <iostream>

using namespace std;

int main()
{
    int sal,yos,bon;

    cout<<"Enter years of service :\n";
    cin>>yos;

    cout<<"Enter your salary :\n";
    cin>>sal;

    bon=5.0/100*sal;

    if(yos>5)
     cout<<"Your bonus is "<<bon<<endl;

     else
        cout<<"You get no bonus. Sorry!\n";



    return 0;
}
