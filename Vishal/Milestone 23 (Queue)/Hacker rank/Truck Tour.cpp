#include<iostream>
using namespace std;
#define ll long long

int main()
{
    int n,ans;
    cin >> n;
    int petrol[n][2];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
            cin >> petrol[i][j];
    }

    ll total_petrol = 0;
    for(int i=0; i<n; i++)
    {
        total_petrol += (ll)petrol[i][0] - (ll)petrol[i][1];

        if(total_petrol < 0)
        {
            ans = i+1;
            total_petrol = 0;
        }
    }

    cout << ans << "\n";
    return 0;
}