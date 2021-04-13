#include <iostream>
using namespace std;
int main(){
    int l, b;
    cout <<"Enter the length and breadth of the rectangle"<<endl;
    cin >> l >> b ;
    if(l==b)
        cout << "This rectangle is a square";
    else
        cout << "This rectangle is not a square";
    return 0;    
}