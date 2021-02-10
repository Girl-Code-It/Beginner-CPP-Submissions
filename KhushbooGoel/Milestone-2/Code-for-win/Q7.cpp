#include<iostream>
using namespace std;
int main()
{
    int i=1 , sum=0 , n ;
    cout << "Enter limit: ";
    cin >> n;
    while(i<=n)
    {
        if(i%2==0)
            sum+=i ;
        i++;
    }
    cout << "Sum: " << sum;


    return 0;
}

