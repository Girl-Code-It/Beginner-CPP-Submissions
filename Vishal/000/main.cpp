#include<iostream>
#include<string>
using namespace std;

//Check substring is palindrome or not
int isPalindrome(string Substr,int n)
{
    for(int i=0; i <= n/2; i++)
    {
        if(Substr[i] != Substr[n-1-i])
            return 0;
    }
    return 1;
}
//It gives all substring
int AllSubstring(string str)
{
    int n = str.length();
    for (int len = 1; len <= n; len++)
    {
        for(int i=0; i <= n-len; i++)
        {
            string Substr = "";
            for(int j=i; j <= i+len-1; j++)
                Substr.push_back(str[j]);

            if(isPalindrome(Substr,len))
                return 0;
        }
    }
    return 1;
}

int main()
{
    int l, r, ans = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if(AllSubstring(to_string(i)))
            ans++;
    }
    cout << ans;
    
    return 0;
}