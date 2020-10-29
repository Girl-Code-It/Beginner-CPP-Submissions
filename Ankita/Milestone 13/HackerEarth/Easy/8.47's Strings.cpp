#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i= 0; i < t; i++)
    {
        string a;
        cin>> a;

            int res = 0;
            for(int j = 0; j < a.size(); j++)
            {
                string sub_string ="";
                sub_string += a[j];
                if(a[j] == '$' || a[j] == '&')
                    res++;
                for(int k = j+1; k < a.size(); k++)
                {
                    sub_string += a[k];
                    int num1 = sub_string.find("&", 0);
                    int num2 = sub_string.find("$", 0);
                    if(num1 != -1 || num2 != -1)
                        res++;
                }
            }
            cout << res << "\n";

    }
}
