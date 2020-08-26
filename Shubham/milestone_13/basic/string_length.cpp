#include<iostream>
#include<cstdlib>
#define MAX 100
using namespace std;

int main()
{
    //program to find length of string

    char str[MAX];
    int count =0;
    cout << "Enter the string \n";
    cin >> str;

    for(int i=0; str[i] != '\0'; i++)
    {
        count++;
    }

    cout << "Length of string is " << count << endl;

}
