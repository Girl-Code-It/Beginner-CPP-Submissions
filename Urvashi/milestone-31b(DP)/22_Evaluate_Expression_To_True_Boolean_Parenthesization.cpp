/* (https://practice.geeksforgeeks.org/problems/boolean-parenthesization/0)

*/

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

//Solution 1: Using Recursion 
int Evaluate(string s , int i , int j , bool isTrue)
{
    // Empty string will be false.
    if(i > j)
        return false;
    
    // If string contains only one element then we will check what we want to evaluate 
    // the whole string to be true if we need true and the string is also true then 
    // return true else false and if we need false and the string is also false then
    // return true else return false.
    if(i == j)
    {
        if(isTrue == true)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }

    int ans = 0;

    // As our string contains either 'T' , 'F' or operators('^' , '&' , '|') so we have to partition at
    // operator because partitioning at any letter will be of no use . So we are starting partitioning 
    // with i+1(first operator) upto j-1(last operator) and we are incrementing k by 2 to reach next operator.
    for(int k = i+1 ; k <= j-1 ; k += 2)
    {
        int LT = Evaluate(s , i , k-1 , true); // ways to get true from left partition when we need true.
        int LF = Evaluate(s , i , k-1 , false); // ways to get false from left partition when we need false.
        int RT = Evaluate(s , k+1 , j , true); // ways to get true from right partition when we need true.
        int RF = Evaluate(s , i , k-1 , true); // ways to get false from right partition when we need false.

        // to get true from and of two expressions both expressions must be true.
        if(s[k] == '&')
        {
            if(isTrue == true)
                ans += LT * RT ;
            else
                ans += LF*RF + LF*RT + LT*RF;
        }

        // to get true from XOR of two expressions one expression must be true and one must be false.
        else if(s[k] == '^')
        {
            if(isTrue == true)
                ans += LF*RT + LT*RF;
            else
                ans += LT*RT + LF*RF;
        }

        // to get true from OR of two expressions , minimum one expression must be true.
        else if(s[k] == '|')
        {
            if(isTrue == true)
                ans += LT*RT + LT*RF + LF*RT ;
            else
                ans += LF*RF;
        }
    }
    return ans;
}

//Solution 2: Using Recursion + Memoization
unordered_map <string, int> m;
int Evaluate(string s , int i , int j , bool isTrue)
{
    if(i > j)
        return false;

    if(i == j)
    {
        if(isTrue == true)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }
    //Generate unique Key .
    string temp = to_string(i);
    temp += " " + to_string(j) + " " + to_string(isTrue);
    
    //If key value Already Exist.
    if(m.find(temp) != m.end())
        return m[temp];
    
    int ans = 0;

    for(int k = i+1 ; k <= j-1 ; k += 2)
    {
        int LT = Evaluate(s , i , k-1 , true); 
        int LF = Evaluate(s , i , k-1 , false); 
        int RT = Evaluate(s , k+1 , j , true); 
        int RF = Evaluate(s , i , k-1 , true);

        if(s[k] == '&')
        {
            if(isTrue == true)
                ans += LT * RT ;
            else
                ans += LF*RF + LF*RT + LT*RF;
        }

        else if(s[k] == '^')
        {
            if(isTrue == true)
                ans += LF*RT + LT*RF;
            else
                ans += LT*RT + LF*RF;
        }

        else if(s[k] == '|')
        {
            if(isTrue == true)
                ans += LT*RT + LT*RF + LF*RT ;
            else
                ans += LF*RF;
        }
    }
    //Store the Key
    return m[temp] = ans;
}

int main()
{
    int t, n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        m.clear(); //For solution 2(to avoid unwanted values in the map.)
        cout << Evaluate(s , 0 , n-1 , true) % 1003 << "\n"; // to avoid overflow.
    }
}
