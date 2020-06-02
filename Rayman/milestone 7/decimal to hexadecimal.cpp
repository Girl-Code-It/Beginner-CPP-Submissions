#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int decimal, rem, place=1, n, i=0;
    char hexadecimal[17];
    char HEXVALUES[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    cout<<"Enter a decimal number : ";
    cin>>decimal;
    for (n=decimal; n>0 ;n=n/16)
    {
        rem=n%16;
        hexadecimal[i] = HEXVALUES[rem];
        i++;
    }
    hexadecimal[i]='\0';
    cout<<"hexadecimal number : ";
    strrev(hexadecimal);
    cout<<hexadecimal;
}
