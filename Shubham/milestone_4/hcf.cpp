#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to find HCF of two numbers

    int num1, num2, hcf, minimum;

    cout << "Enter two numbers to find factorial" << endl;
    cin >> num1 >> num2;

    minimum = (num1 < num2) ? num1 : num2;

    for(int i=1; i <= minimum; i++)
    {
        if( num1%i == 0 && num2%i == 0)
            hcf = i;
    }

    cout << "HCF of " << num1 << " and " << num2 << " is : " << hcf << endl;

}

