#include<iostream>
#include<cstdio>
#include<string.h>
#define SIZE 100

using namespace std;

int main()
{
    //find two's compliment

    char binary[SIZE], twos[SIZE];
    int i, length, flag=0;

    cout << "Enter the binary number : " << endl;
    cin >> binary;

    length = strlen(binary);

    for(i=length-1; i >= 0; i--)
    {
        if(binary[i] == '1' && flag == 0)
        {
            flag=1;
            twos[i] = binary[i];
        }
        else
        {
            if(flag == 0)
                twos[i] = binary[i];

            else if(flag == 1)
            {
                if(binary[i] == '0')
                    twos[i] = '1';

                else if(binary[i] == '1')
                    twos[i] = '0';

            }
        }

    }

    cout << twos;
}

