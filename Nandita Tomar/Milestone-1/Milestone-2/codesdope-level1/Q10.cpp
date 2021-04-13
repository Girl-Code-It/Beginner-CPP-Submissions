#include <iostream>
using namespace std;
int main(){
    int x=2 , y=5, z=0;
    cout << "Value of x==2 is : "<< (x==2);
    cout << "\nValue of x!=5 is : "<< (x!=5);
    cout << "\nValue of x!=5 && y>=5 is : "<< (x!=5 && y>=5);
    cout << "\nValue of z!=0 || x==2 is : "<< (z!=0 || x==2);
    cout << "\nValue of !(y<10) is : "<< (!(y<10));
    return 0;

}