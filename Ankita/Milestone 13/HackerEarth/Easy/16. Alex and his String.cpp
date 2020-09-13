#include<bits/stdc++.h>
//#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    int K;
    cin>>S>>K;
    string X= "";
    int length = S.size();
    for(int j = 0; j < length; j++)
    {
        char smallest = S[0];
        int index = 0;
        for(int i = 0; i < K && i < S.size(); i++)
        {
            if(S[i] < smallest)
            {
                smallest = S[i];
                index = i;
            }
        }
        X += smallest;
        S.erase(index, 1);
    }
    cout <<  X;
    return 0;
}
