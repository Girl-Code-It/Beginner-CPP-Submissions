#include <iostream>

using namespace std;

int main()
{
    int num1,num2,lcm,i=1;

    cout<< "Enter first number\n";
    cin>>num1;

    cout<< "Enter second number\n";
    cin>>num2;

    while(i<=(num1 * num2))
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;

        }


      i++;
    }

    cout<< "The LCM is "<<lcm<<endl;


    return 0;
}
