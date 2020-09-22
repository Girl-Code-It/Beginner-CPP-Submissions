// https://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck/0

// Time Complexity - O(N), Space Complexity - O(1)

#include <iostream>
#include <string>
using namespace std;

int countSubsequence(string str)
{
    int aCount = 0, bCount = 0, cCount = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a')
            aCount = 1 + 2 * aCount;
        else if (str[i] == 'b')
            bCount = aCount + 2 * bCount;
        else
            cCount = bCount + 2 * cCount;
    }
    return cCount;
}

int main()
{
    int t;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;
        cout << countSubsequence(str) << "\n";
    }
}