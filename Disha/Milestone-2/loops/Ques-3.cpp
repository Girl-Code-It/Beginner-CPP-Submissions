//Write a C program to print all alphabets from a to z. - using while loop
 using namespace std;
#include<iostream>
int main()
{
    int i=97;

    while(i<=122)
    {
        cout<<char(i)<<"\t";
        i++;
    }

    return 0;
}

