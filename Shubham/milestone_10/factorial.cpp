#include<cstdlib>
#include<iostream>

using namespace std;

int fact(int);

int main()
{
    int num;
    
    cout << "Enter a number to get factorial" << endl;
    cin >> num;

    cout << "Factorial of " << num << " is "<< fact(num);
}

int fact(int n)
{
    int fact =1;

    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;

}
