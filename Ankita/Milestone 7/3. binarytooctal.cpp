#include <iostream>
using namespace std;
int main ()
{
    int refer[] = {0, 1, 10, 11, 100, 101, 110, 111}, octal[3] = {0, 0, 0}, i, binary, k = 0, p = 0;
    cout << "Enter a bit binary number: ";
    cin >> binary;
    cout << "The octal number corresponding to " << binary << " is: ";
    while (binary > 0)
    {
        k = binary % 1000;
        for (i = 0; i < 8; i++)
        {
            if (refer[i] == k)
                octal[p] = i;
        }
        binary = binary/1000;
        p++;
    }

    for (int j = 2; j > -1; j--){
        cout<<octal[j];
    }

}
