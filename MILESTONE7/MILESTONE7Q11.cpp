
//PROGRAM TO CONVERT DECIMAL INTO HEXADECIMAL


#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int num, temp, i = 1, j, r;
    char hex[50];
    cout<<"--------PROGRAM TO CONVERT DECIMAL INTO HEXADECIMAL--------\n";
    cout << " ENTER THE DECIMAL NUMBER  :\n ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        temp = temp / 16;
    }
    cout << "\nHexadecimal equivalent of " << num << " is : "<<strrev(hex)<<endl;

    return 0;
}
