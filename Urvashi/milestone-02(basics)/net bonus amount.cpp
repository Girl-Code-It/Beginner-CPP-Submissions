#include <iostream>
using namespace std;
int main()
{
    float years, sal;
    cout << "enter  your salary and years of service" << endl;
    cin >> sal >> years;
    (years > 5) ? cout << "you will get a bonus of 5% and ur net bonus amount is" << (float)(.05 * sal) : cout << "u will not get any bonus";
}
