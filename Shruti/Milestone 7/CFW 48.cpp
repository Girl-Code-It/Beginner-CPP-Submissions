#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char hex[17], binary[65];
    int i = 0;

    cout<<"\n Enter any hexadecimal number: ";
    cin>>hex;

    for(i=0; hex[i]!='\0'; i++)
    {
        if (hex[i] == '0')
            strcat(binary, "0000");
        else if (hex[i] == '1')
            strcat(binary, "0001");
        else if (hex[i] == '2')
            strcat(binary, "0010");
        else if (hex[i] == '3')
            strcat(binary, "0011");
        else if (hex[i] == '4')
            strcat(binary, "0100");
        else if (hex[i] == '5')
            strcat(binary, "0101");
        else if (hex[i] == '6')
            strcat(binary, "0110");
        else if (hex[i] == '7')
            strcat(binary, "0111");
        else if (hex[i] == '8')
            strcat(binary, "1000");
        else if (hex[i] == '9')
            strcat(binary, "1001");
        else if (hex[i] == 'A' || hex[i] == 'a')
            strcat(binary, "1010");
        else if (hex[i] == 'B' || hex[i] == 'b')
            strcat(binary, "1011");
        else if (hex[i] == 'C' || hex[i] == 'c')
            strcat(binary, "1100");
        else if (hex[i] == 'D' || hex[i] == 'd')
            strcat(binary, "1101");
        else if (hex[i] == 'E' || hex[i] == 'e')
            strcat(binary, "1110");
        else if (hex[i] == 'F' || hex[i] == 'f')
            strcat(binary, "1111");
        else
            cout<<"\n Invalid hexadecimal input.";

    }
    cout<<"\n binary = "<<binary<<endl;

    return 0;
}
