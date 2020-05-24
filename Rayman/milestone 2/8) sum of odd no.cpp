#include <iostream>
using namespace std;
int main()
{
    int i, n=0, sum=0;        //initialized n, sum for removing the garbage value
    cout<<"enter a number : "<< n <<endl;
    cin>> n;
    i=1;
    while (i<=n)
    {
        sum+=i; //increment should be done after taking the sum
        i=i+2;
    }
    cout<<"sum of "<<n<<" odd numbers is = "<<sum;
    return 0;
}
