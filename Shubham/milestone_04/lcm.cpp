#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to find LCM of two numbers

    int num1, num2, maximum, lcm;

    cout << "Enter two numbers to find their LCM" << endl;
    cin >> num1 >> num2;

    maximum = (num1 > num2) ? num1 : num2;

    for(int i=maximum; ; i++)
    {
        if(i%num1 == 0 && i%num2 ==0)
        {
            lcm = i;
            break;
        }
    }

    cout << "LCM of " << num1 << " and " << num2 << " is :  " << lcm << endl;

}

