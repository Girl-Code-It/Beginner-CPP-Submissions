#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // answer 6
    // int a, b, c;
    // cout << "enter the age of  1 person" << endl;
    // cin >> a;
    // cout << "enter the age of  2 person" << endl;
    // cin >> b;
    // cout << "enter the age of  3 person" << endl;
    // cin >> c;

    // if (a > b && a >c && c > b)
    // {
    //     cout << "1 is the oldest and 2 is the youngest";
    // }
    // else if (a > b && a > c && c < b)
    // {
    //     cout << "1 is the oldest and  3 is the youngest";
    // }
    // else if (a > b && a < c && c > b)
    // {
    //     cout << "3 is the oldest and  2 is the youngest";
    // }
    // else if (a < b && a < c && c < b)
    // {
    //     cout << "2 is the oldest and  1 is the youngest";
    // }
    // else if (a < b && c > a && c > b)
    // {
    //     cout << "3 is the oldest and 1 is the youngest";
    // }
    // else if (b > c && b > a && c < a)
    // {
    //     cout << "2 is the oldest and  3 is the youngest";
    // }

    //part b
    int a,b,c;
    cin>>a>>b>>c;
    int old, young;

    if (a >= b && a >= c && c >= b)
    {
       old=a;
       young=b;
    }
    else if (a >= b && a >= c && c <= b)
    {
        old=a;
       young=c;
    }
    else if (a <= b && a <= c && c <= b)
    {
        old=b;
       young=a;
    }
    else if (a >= b && a <= c && c >= b)
    {
        old=c;
       young=b;
    }
    else if (a <= b && c >= a && c >= b)
    {
        old=c;
       young=a;
    }
    else if (b >= c && b >= a && c <= a)
    {
        old=b;
       young=c;
    }

    if(old != young){
        cout<<"oldest: "<<old<<endl;
        cout<<"youngest: "<<young<<endl;
    } else {
        cout<<"ages of all persons are equal";
    }
    return 0;
}