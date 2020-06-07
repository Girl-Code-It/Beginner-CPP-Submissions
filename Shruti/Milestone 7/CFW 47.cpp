#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long decimal;
    int digit;
    char hex[65];
    char hexvalues[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int index = 0;

    cout<<"\n Enter a decimal value: ";
    cin>>decimal;

    while(decimal!=0)
    {
        digit = decimal%16;
        hex[index] += hexvalues[digit];
        decimal /= 16;
        index++;
    }
    hex[index] = '\0';
    strrev(hex);
    cout<<"\n Hexadecimal value = "<<hex<<endl;
    return 0;
}
