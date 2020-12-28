#include<iostream>
using namespace std;
int main()
{
    int n , i =1 , sum =0;
    cout << "Enter limit: ";
    cin >> n;
    while(i<=n)
    {
        sum += i;
        i++;
    }
    cout << "Sum is: " << sum;



    return 0;
}

