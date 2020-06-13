
#include <iostream>
using namespace std;

int main()
{
//  Taking 2 variables to store the 2 numbers that user will enter.
    int n1, n2;
    
//  I/O regarding the numbers for the user friendly interface.
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    
//  IF & ELSE statement for the compiler system to compare the numbers entered.
        if (n1>n2)
        {
            cout<<"First number is the largest one among the 2 entered \n\n";
        }
        else if (n1<n2)
        {
            cout<<"Second number is the largest one among the 2 entered \n\n";
        }
        else
        {
            cout<<"Entered numbers are equal to each other\n\n";
        }
    
    return 0;
}
