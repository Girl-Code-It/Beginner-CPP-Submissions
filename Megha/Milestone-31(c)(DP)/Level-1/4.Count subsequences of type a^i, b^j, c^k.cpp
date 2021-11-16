//https://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck4425/1#

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        int len = s.length(), a = 0, b = 0, c = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'a')    a = 1+2*a;
        if (s[i] == 'b')    b = a+2*b;
        if (s[i] == 'c')    c = b+2*c;
    }
    return c%1000000007;
    }
};
