//Write a C program to calculate product of digits of a number.#include<iostream>

using namespace std;
#include<iostream>
int main()
{
    int num,Product=1;
    cout<<"\n Enter the number :";
    cin>>num;

    while(num!=0)
    {
        Product*=(num%10);
        num=num/10;
    }
    cout<<"\n Product of the digits of a number ="<<Product<<endl;

    return 0;
}

