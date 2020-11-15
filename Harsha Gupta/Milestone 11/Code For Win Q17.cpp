//Put even and odd elements of array in two separate arrays

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter the elements of Array: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    int even[size];
    int odd[size];
    int evenC = 0, oddC = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            even[evenC] = a[i];
            evenC++;
        }
        if (a[i] % 2 != 0) {
            odd[oddC] = a[i];
            oddC++;
        }
    }
    cout << "\nEven Array: ";
    for (int i = 0; i < evenC; i++) {
        cout << even[i] << "  ";
    }
    cout << "\nOdd Array: ";
    for (int i = 0; i < oddC; i++) {
        cout << odd[i] << "  ";
    }
    return 0;
}
