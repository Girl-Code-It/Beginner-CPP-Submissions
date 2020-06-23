#include<iostream>
using namespace std;
inline int fibonacci(int n, int t1, int t2)
{
    int tn;
    tn = t1 + t2;
    if (n == 1)
    {
      return (tn);
    }
    else
        return(fibonacci (n-1, t2, tn));
}
int main ()
{
    int n, term, t1 = 0, t2 = 1;
    cout << "Enter the term to be displayed: ";
    cin >> n;
    if (n == 1)
        cout<< n <<" term of fibonacci series: 0";
    else if (n == 2)
        cout<< n <<" term of fibonacci series: 1";
    else
        cout << n <<" term of fibonacci series: " << term;
    term = fibonacci (n-2, t1, t2);

}
