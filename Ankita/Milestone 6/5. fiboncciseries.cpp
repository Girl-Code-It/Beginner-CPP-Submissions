#include <iostream>
using namespace std;
int main () {
    long int num, first = 0, second = 1, next, i;
    cout << "Enter any number: "<< endl;
    cin >> num ;
    cout << "First " << num << " terms of Fibonacci series are:" << endl;
    for (i = 0; i<num; i++) {
       if (i<=1)
       next = i;
    else
        {next = first + second;
        first = second;
        second = next;
        }
         cout << next << endl;
    }

}
