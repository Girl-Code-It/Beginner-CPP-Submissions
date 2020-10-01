#include<cstdlib>
#include<iostream>

using namespace std;

int max(int, int, int);
int min(int, int, int);

int main()
{
    int a, b, c;

    cout << "Enter three Number to get max  and minimum of them";

    cin >> a >>  b >>  c;

    cout << "Greatest among three is " << max(a, b, c) << endl;

    cout << "Lowest among three is " << min(a, b, c) << endl;
}

int max(int a, int b, int c)
{
    int max;

    max = (a > b) ? a : b;

    max = (c > max) ? c : max;

    return max;
}

int min(int a, int b, int c)
{
    int min;

    min = (a < b) ? a : b;

    min = (c < min) ? c : min;

    return min;
}
