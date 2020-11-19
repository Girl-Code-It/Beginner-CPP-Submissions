//Sorting the array in ascending and descending order

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

void sort_desc(int a[], int size)
{
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] < a[j]) {
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
    cout << "\n------------";
    cout << "\nMAIN MENU";
    cout << "\n------------";
    cout << "\nEnter 1 to sort array in ascending order.";
    cout << "\nEnter 2 to sort array in descending order.";
    cout << "\nEnter your choice: ";
    cin >> ch;
    switch (ch) {
    case 1:
        sort_asc(a, size);
        break;
    case 2:
        sort_desc(a, size);
        break;
    }
    cout << "\nSorted array:";
    for (int i = 0; i < size; i++) {
        cout << a[i] << "  ";
    }
    return 0;
}
