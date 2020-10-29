#include <bits/stdc++.h>
using namespace std;

void pairSum(int input[], int size, int x)
{
    unordered_map<int, int> m;

    for(int i=0; i<size; i++)
    {
        int rem = x - input[i];

        if(m.find(rem) != m.end())
        {
            int count = m[rem];

            while(count--)
            {
                if(rem < input[i])
                    cout << rem << " " << input[i] << "\n";
                else
                    cout << input[i] << " " << rem << "\n";
            }
        }

        m[input[i]]++;
    }
}