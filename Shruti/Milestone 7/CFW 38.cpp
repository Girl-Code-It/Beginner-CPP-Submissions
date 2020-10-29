#include <iostream>
using namespace std;
#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, carry=1;

    cout<<"\n Enter "<<SIZE<<" bit binary value: ";
    cin>>binary;

    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';

    for(i=SIZE-1; i>=0; i--)
    {
        if(onesComp[i] == '1' && carry == 1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i] == '0' && carry == 1)
        {
            twosComp[i] = '1';
            carry = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    cout<<"\n Original binary: "<<binary;
    cout<<"\n One's complement: "<<onesComp;
    cout<<"\n Two's complement: "<<twosComp;

    return 0;
}
