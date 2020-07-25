#include<unordered_map>

int highestFrequency(int *input, int n)
{
    unordered_map<int,int>m;
    
    for(int i=0; i<n; i++)
        m[input[i]]++;

    int ans = input[0],max = m[input[0]],j = 1;
    
    while(j < n)
    {
        if(m[input[j]] > max)
        {
            max = m[input[j]];
            ans = input[j];
        }
        j++;
    }

    return ans;
}