//Write a program to find the length of string.
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    //declaration of string
    char a[1000]; //or
    //string a;
    cin >> a;
    //method 1 - using string::size   (size is a member of class string)
    //cout << a.size();
    //method 2 - using string::length  (length is a member of class string)
    //cout << a.length();
    //method 1 and 2 are synonymous
    //method 3 - using strlen(const char *a)
    //this method does not work with 2 type of declaration(i.e., string a)
    //cout << strlen(a);
    // method 4 - using while loop
    /*int i = 0, count = 0;
    while (1)
    {
        if (a[i] != '\0')
            count++;
        else
            break;
        i++;
    }
    cout << count;*/
    // method 5 - using for loop
     int count = 0;
     for (int i = 0; a[i]; i++)
     count ++;
     cout << count;

}
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    string a;
    gets(a);
    cout << a.size();
}
