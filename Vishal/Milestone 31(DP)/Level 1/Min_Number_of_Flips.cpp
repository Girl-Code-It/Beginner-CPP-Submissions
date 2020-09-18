// https://practice.geeksforgeeks.org/problems/min-number-of-flips/0

/*
Here we have two posibilities either string will start with 0 or 1.
so we will count total number of flipcount required in both cases and return the minimum one.

Time complexity - O(N), Space Complexity - O(1)
*/
#include <iostream>
#include <string>
using namespace std;

int getAlternate(string str, char expected)
{
    int flipCount = 0;
    for (int i = 0; i < str.size(); i++)
    {
        //We have to flip this bit
        if (str[i] != expected)
            flipCount++;

        //Flip the character
        expected = (expected == '0') ? '1' : '0';
    }
    return flipCount;
}

int minNumberOfFlips(string str)
{
    return min(getAlternate(str, '0'), getAlternate(str, '1'));
}

int main()
{
    int t;
    string str;

    while (t--)
    {
        cin >> str;
        cout << minNumberOfFlips(str) << "\n";
    }
}