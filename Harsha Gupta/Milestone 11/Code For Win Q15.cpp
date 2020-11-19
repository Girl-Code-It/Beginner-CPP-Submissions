//Merge two arrays into the third array

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter the size of Array 1: ";
    cin >> size1;
    int a[size1];
    cout << "\nEnter the elements of Array 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> a[i];
    }
    cout << "Enter the size of Array 2: ";
    cin >> size2;
    int b[size2];
    cout << "\nEnter the elements of Array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> b[i];
    }
    int c[size1 + size2];
    for (int i = 0; i < size1; i++) {
        c[i] = a[i];
    }
    for (int i = size1; i < size1 + size2; i++) {
        c[i] = b[i - size1];
    }
    cout << "\nElements of merged array:  ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << c[i] << "  ";
    }
    return 0;
}
