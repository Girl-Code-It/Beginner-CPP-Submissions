#include <iostream>
using namespace std;
int main()
{
    int n, t, i, j;
    cin >> n >> t;
    string name[n];
    string temp;
    long int fan[n];
    long int tmp;
    for (i = 0; i < n; i++)
    {
        cin >> name[i] >> fan[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (fan[i] < fan[j])
            {
                tmp = fan[i];
                fan[i] = fan[j];
                fan[j] = tmp;
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
            else if (fan[i] == fan[j] && name[i] > name[j])
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
    for (i = 0; i < t; i++)
    {
        cout << name[i] << endl;
    }
    return 0;
}
