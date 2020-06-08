#include <iostream>

using namespace std;

int main()
{
    int num,p;

    cout<< "Enter a number :\n";
    cin>>num;

    p=num;

    while(p>0)
    {
        p%10;

        switch(p%10)
        {

        case 1: cout<< "One ";
        break;
        case 2: cout<< "Two ";
        break;
        case 3: cout<< "Three ";
        break;
        case 4: cout<< "Four ";
        break;
        case 5: cout<< "Five ";
        break;
        case 6: cout<< "Six ";
        break;
        case 7: cout<< "Seven ";
        break;
        case 8: cout<< "Eight ";
        break;
        case 9: cout<< "Nine ";
        break;
        case 0: cout<< "Zero ";
        break;
        default : cout<< "Invalid entry\n ";

        }

        p = p/10;

    }



    return 0;
}
