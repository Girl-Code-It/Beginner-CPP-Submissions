#include<iostream>
using namespace std;
int main()
{
    int x = 2;
    int y = 5;
    int z = 0;
    if(x == 2)
        cout << "yes" << endl;
    else cout << "no" << endl;

    if(x != 5)
        cout << "yes" << endl;
    else cout << "no" << endl;

     if(x != 5 && y >= 5)
        cout << "yes" << endl;
    else cout << "no" << endl;

     if(z != 0 && x == 2)
        cout << "yes" << endl;
    else cout << "no" << endl;

     if( !(y < 10))
        cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
