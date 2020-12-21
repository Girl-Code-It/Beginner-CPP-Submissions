#include<iostream>
using namespace std;
int main()
{
    int qt , amt;
    cout << "Enter quantity: ";
    cin >> qt;
    amt = qt * 100;
    if(amt > 1000)
    {
        cout << "Your discount: " << ((10*amt)/100) << endl;
        amt = amt - ((10*amt)/100);
        cout<< "Your total cost: " << amt;
    }
    else
                cout << "Your total cost: " << amt;
    return 0;
}
