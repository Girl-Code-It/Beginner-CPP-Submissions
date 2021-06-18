/* A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include <iostream>
using namespace std;
int main()
{
    float tc, ac;
    float p;
    cin >> tc >> ac;
    p = (ac / tc) * 100;
    if (p < 75)
        cout << " Student is not allowed to sit in exam";
    else
        cout << " Student is allowed to sit in exam";
    return 0;
}