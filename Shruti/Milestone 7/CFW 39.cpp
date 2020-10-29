#include <iostream>
using namespace std;

int main()
{
    int oct[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long binary, octal;
    int digit, place, i;

    octal = 0;
    place = 1;

    cout<<"\n Enter any binary number: ";
    cin>>binary;

    while(binary != 0)
    {
        digit = binary % 1000;

        for(i=0; i<8; i++)
        {
            if(oct[i] == digit)
            {
                octal = (i * place) + octal;
                break;
            }
        }

        binary /= 1000;

        place *= 10;
    }

    cout<<"\n Octal number = "<<octal;

    return 0;
}
