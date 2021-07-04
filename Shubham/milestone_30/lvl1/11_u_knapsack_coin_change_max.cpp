#include <bits/stdc++.h>

using namespace std;

int coin_change_max(int A[], int n, int sum)
{
    if (sum == 0)
        return 1;

    if (n == 0)
        return 0;

    if (A[n - 1] <= sum)
    {
        int included = coin_change_max(A, n, sum - A[n - 1]);
        int not_included = coin_change_max(A, n - 1, sum);

        return included + not_included;
    }
    else
        return coin_change_max(A, n - 1, sum);
}

int main()
{
    int A[] = {1, 2, 3};
    int sum = 5;

    cout << coin_change_max(A, 3, 5) << endl;
}