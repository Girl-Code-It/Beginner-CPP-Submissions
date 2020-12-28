#include<iostream>
using namespace std;
int main()
{
    char input;
    int ch;
    cout << "Enter character: ";
    cin >> input;
    ch = input;
    if(ch >= 65 && ch <= 90)
        cout << "You have entered uppercase character.";
    else if(ch >= 97 && ch <= 122)
        cout << "You have entered lowercase character.";
    else
        cout << "You have entered special character.";



    return 0;
}
