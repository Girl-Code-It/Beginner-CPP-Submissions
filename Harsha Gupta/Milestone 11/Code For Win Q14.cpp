//Delete all duplicate elements in array

#include <iostream>
#include <conio.h>
using namespace std;

del_element(int a[], int size, int pos)
{
    for (int i = pos; i < size; i++) {
        a[i] = a[i + 1];
    }
}

int main()
{
    int size, ans = 0;
    cout << "Enter the size of array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter the elements of Array: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                del_element(a, size, j);
                size--;
                j--;
            }
        }
    }
    cout << "\nArray after deleting: ";
    for (int k = 0; k < size; k++) {
        cout << a[k] << "  ";
    }
    return 0;
}
