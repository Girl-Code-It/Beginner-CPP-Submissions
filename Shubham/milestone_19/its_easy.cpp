#include <iostream>
#include <string>
using namespace std;

void sort(string *S, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (S[j].length() > S[j + 1].length())
            {
                string temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string S;
        getline(cin, S);
        string str[50], temp;
        int j = 0;
        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] == ' ')
                str[j++] = temp, temp = "";
            else
                temp += S[i];
        }
        str[j] = temp;
        sort(str, j + 1);
        cout << " ";
        for (int i = 0; i <= j; i++)
            cout << str[i] << " ";
        cout << endl;
    }
}
