#include<bits/stdc++.h>

using namespace std;

int count_subsets_sum(int A[], int sum, int n)
{
    if(sum == 0)
        return 1;
    if(n == 0)
        return 0;

    if(A[n-1] <= sum)
    {
        int included = count_subsets_sum(A, sum - A[n-1], n-1);
        int excluded = count_subsets_sum(A, sum, n-1);

        return included + excluded;
    }
    else
        return count_subsets_sum(A, sum, n-1);
}

int main()
{     
    int A[] = {1, 2, 3, 3};

    cout << count_subsets_sum(A, 6, 4) << endl;
}