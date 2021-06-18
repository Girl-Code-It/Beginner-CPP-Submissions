#include<iostream>
using namespace std;
 
int main()
{
    int  num, val, pro = 0;
 
    cout << "Enter the number : ";
    cin >> num;
    val=num;
    while (num != 0)
    {
        pro = pro * (num % 10);
        num= num/10;
    }
    cout << "The product of the digits of "
         << val << " is " << pro;
         return 0;
}

