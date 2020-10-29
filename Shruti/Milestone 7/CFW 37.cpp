#include <iostream>
using namespace std;

int main()
{
    int SIZE=8;
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0;


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
        else
        {
            cout<<"\n Invalid output.";
            error = 1;

            break;
        }
    }

    onesComp[SIZE] = '\0';

    if(error == 0)
    {
        cout<<"\n Original binary: "<<binary;
        cout<<"\n One's complement: "<<onesComp;
    }

    return 0;
}
