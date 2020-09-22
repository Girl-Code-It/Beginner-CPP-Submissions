/* (https://leetcode.com/problems/palindrome-partitioning-ii/)
   (https://practice.geeksforgeeks.org/problems/palindromic-patitioning/0)
   
   Question:- Given a string, a partitioning of the string is a palindrome partitioning if every sub-string of the partition is a palindrome. 
   We have to find the mnimum cuts which will convert our string into all palindromes.
   
*/

#include <iostream>
#include <cstring>
using namespace std;

int DP[1001][1001];

bool isPalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i++] != s[j--])
            return false;
    }
    return true;
}

// Solution1 :- Recursive..
int Partitions(string s, int i, int j)
{
    // if string is empty or of only one element then its already a palindrome.
    if (i >= j)
        return 0;
   
    // if string is already palindrome then no cuts are required.
    if (isPalindrome(s, i, j))
        return 0;

    int minimum = INT_MAX;
    // we will divide the string into two parts and will find the no of cuts for the both parts and will add 1 to it as we divided the string into two parts it is also a cut.
    for (int k = i; k <= j - 1; k++)
    {
        int tempAns = 1 + Partitions(s, i, k) + Partitions(s, k + 1, j);

       // will get the minimum cuts.
        if (tempAns < minimum)
            minimum = tempAns;
    }
    return minimum;
}

// Solution2 :- Recursion + Memoization..
int Partitions(string s, int i, int j)
{
    // if string is empty or of only one element then its already a palindrome.
    if (i >= j)
        return 0;

    if (isPalindrome(s, i, j))
        return 0;

    // will check if we have already processed that particular part answer.
    if (DP[i][j] != -1)
        return DP[i][j];

    int minimum = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int tempAns = 1 + Partitions(s, i, k) + Partitions(s, k + 1, j);

        if (tempAns < minimum)
            minimum = tempAns;
    }
    // storing the answer in matrix so that it can be used later.
    return DP[i][j] = minimum;
}

// Solution3 :- Recursive + Memoization + more Optimised..
int Partitions(string s, int i, int j)
{
    // if string is empty or of only one element then its already a palindrome.
    if (i >= j)
        return 0;

    if (isPalindrome(s, i, j))
        return 0;
   
    // will check if we have already processed that particular part answer.
    if (DP[i][j] != -1)
        return DP[i][j];

    int left, right;

    int minimum = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        // will check if we already have the answer for the left part in our matrix.
        if (DP[i][k] != -1)
            left = DP[i][k];
        else
            left = Partitions(s, i, k); // otherwise find the ans and store in matrix
        DP[i][k] = left;
        
        // will check if we already have the answer for the right part in our matrix.
        if (DP[k + 1][j] != -1)
            right = DP[k + 1][j];
        else
            right = Partitions(s, k + 1, j); // otherwise find the ans and store in matrix
        DP[k + 1][j] = right;

        int tempAns = 1 + left + right;

        if (tempAns < minimum)
            minimum = tempAns;
    }
    return DP[i][j] = minimum;
}

int main()
{
    string s;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> s;
        memset(DP, -1, sizeof(DP));
        cout << Partitions(s, 0, s.size() - 1) << "\n";
    }
}
