#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;


char nonRepeatingCharacter(string str)
{
    unordered_map<char,int>m;
    int n = str.length();

    for(int i=0; i<n; i++)
        m[str[i]]++;

    for(int i=0; i<n; i++)
    {
        if(m[str[i]] == 1)
            return str[i];
    }
    
    return str[0];
}