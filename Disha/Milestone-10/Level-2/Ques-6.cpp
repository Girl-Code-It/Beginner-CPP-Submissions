using namespace std;
#include<iostream>


int taxCalculator(int gross,int saving)
{   int tax,payable,rem;
    if(saving <= 100000)
        tax=gross-saving;
    else
        tax=gross-100000;

    if(tax<=10000)
    {
        return 0;
    }

    else if(tax>100000 && tax<=200000)
    {
        tax-=100000;
        payable=0.1*tax;
        return payable;
    }
    else if(tax>200000 && tax<=500000)
    {
        payable=(tax-200000)*0.2 +10000;
        return payable;
    }
    else if(tax>500000)
    {
        payable=(tax-500000)*0.3 + 10000 +60000;
        return payable;
    }


}

int main()
{
    int gross,saving;
    cout<<"\n Enter your gross salary :";
    cin>>gross;

    cout<<"\n Enter your total saving :";
    cin>>saving;

    cout<<"\n Tax="<< taxCalculator(gross,saving);
    return 0;
}
