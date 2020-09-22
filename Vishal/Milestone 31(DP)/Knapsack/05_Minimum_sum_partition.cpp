#include <iostream>
using namespace std;

int minimumSumPartition(int arr[], int sum, int N)
{
    bool DP[N + 1][sum + 1];

    for (int i = 0; i <= N; i++) 
        DP[i][0] = true; 
  
    for (int i = 1; i <= sum; i++) 
        DP[0][i] = false;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                DP[i][j] = DP[i-1][j-arr[i-1]] || DP[i-1][j];
            else
                DP[i][j] = DP[i-1][j];
        }
    }
    
    //i will check in last row from right where i get first true subset sum....it will give my answer

    int i = sum;

    while(! DP[N][i])
        i--;
    
    return 2*sum - 2*i;
    
}

int main()
{
    int T, N, ans;
    cin >> T;

    while (T--)
    {
        cin >> N;
        int arr[N], sum = 0;
        
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        
       ans = minimumSumPartition(arr, sum/2, N);

       if (sum & 1)
            ans++;

        cout << ans << "\n";
       
    }

    return 0;
}