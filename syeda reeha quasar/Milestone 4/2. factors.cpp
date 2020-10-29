#include <iostream>
using namespace std;
int main(){
    long int a, b, c, k, i;
    cout << "Enter a number." << endl;
    cin >> a;
    i = 2;
    cout << "The factors of given number are:" << endl;
    while ( i <= a)
    {
        k = a%i;
        if (k == 0)
        cout <<"-> " << i << endl;

        i++;
    }

}
