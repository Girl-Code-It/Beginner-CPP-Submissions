#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int unit, total;
    int final_cost;

    cout << "How many units have you purchased mam?" << endl;
    cin >> unit;

    total = unit *100;

    if(total >= 1000)
    {
        final_cost = total - total * 0.1;
        cout << "Congrats Sir You've Got 10% of special Discount ";
        cout << endl << "Your final bill is " << final_cost;
    }
    else
    {
        final_cost = total;

        cout << "your final bill is " << final_cost;
    }
}

