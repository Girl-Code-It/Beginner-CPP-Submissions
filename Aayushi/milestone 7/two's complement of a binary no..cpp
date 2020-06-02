/*
 *twos complement is defined as sum of ones complement of a binary number and 1. for eg:
 01101100
 10010011  <-- one's complement
 +      1
 10010100  <-- two's complement  ......(one is carry over)
 */
#include <iostream>
using namespace std;
int main()
{
    int SIZE=8;
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];   // SIZE+1 is done for null character.
    int i, carry=1;

    cout<<"Enter "<<SIZE<<" bit binary value: ";
    cin>>binary;

 /* Find ones complement of the binary number */
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
    onesComp[SIZE] = '\0';       /*The C compiler automatically places the '\0'( null character ) at the end of the string
                                     when it initializes the array. so onesComp[8]=\0 <-- LAST ELEMENT OF STRING */
    /*
     * Add 1 to the ones complement
     */
    for(i=SIZE-1; i>=0; i--)          //i is decremented so that 1 is carried over from right side. no need to reverse.
    {
        if(onesComp[i] == '1' && carry == 1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i] == '0' && carry == 1)
        {
            twosComp[i] = '1';
            carry = 0;                            //At this point carry becomes zero and condition becomes false.
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    cout<<"Original binary = "<<binary<<endl;
    cout<<"Ones complement = "<<onesComp<<endl;
    cout<<"Twos complement = "<<twosComp<<endl;

    return 0;
}
