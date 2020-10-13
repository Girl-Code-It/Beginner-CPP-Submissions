#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    (num >= 0) ? cout << num : cout << -(num);
}
