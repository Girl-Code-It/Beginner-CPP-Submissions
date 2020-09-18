#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   char letter;

   cout << "Enter a character to check if it is lower of upper case" << endl;
   cin >> letter;

   if(letter >= 65 && letter <= 96)
        cout << "It's a UPPER CASE letter";

    else if( letter >= 97 && letter <=123)
        cout << "It's a LOWER CASE letter";

    else
        cout << "It's not a valid letter";
}

