#include<iostream>
using namespace std;

int main( )
{   char str[80];
    cout<<"Enter string: ";
    cin.getline(str, 80);
    int i;
    for(i = 0; str[i] != '\0'; i++);
    cout << "Length of string is: " << i;
    return 0;
}
