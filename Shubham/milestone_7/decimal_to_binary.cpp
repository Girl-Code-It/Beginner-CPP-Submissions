#include<iostream>
#include<cstdio>

using namespace std;

int dec_to_bin(int);

int main()
{
    //program to convert decimal to binary
    int decimal, binary;

    cout << "Enter a decimal number ";
    cin >> decimal;

    binary = dec_to_bin(decimal);
    cout << "Binary : " << binary;
}

int dec_to_bin(int dec)
{
    int rem, bin=0, place=1;

    while(dec != 0)
    {
        rem = dec%2;
        bin += rem*place;
        place *= 10;
        dec /= 2;
    }
    return bin;
}

