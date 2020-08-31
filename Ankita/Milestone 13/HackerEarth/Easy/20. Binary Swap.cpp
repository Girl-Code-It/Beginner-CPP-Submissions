#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    string a, b;
    int num = 0, flag;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i++)
    {
        if(b[i] != a[i])
        {
            flag = 0;
            for(int j = i; j < a.size(); j++)
            {
                if(a[i] == b[j])
                {
                    int temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                    num++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "-1\n";
                break;
            }
        }
    }
    if (flag == 1)
        cout << num;
    return 0;
}
