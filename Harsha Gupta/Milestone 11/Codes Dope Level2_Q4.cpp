#include <iostream>
#include <conio.h>
using namespace std;

void sort_asc(int a[], int size)
{
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int size, ch;
    cout << "Enter the size of array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter the elements of Array: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    sort_asc(a, size);
    cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << "  ";
    }
    return 0;
}
