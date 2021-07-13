#include <bits/stdc++.h>

using namespace std;

int cut_it(vector<int> A, int L, int n)
{
    if(n == 0 || L == 0)
        return 0;
    
    if(A[n - 1] <= L)
    {
        int included = 1 + cut_it(A, L - A[n - 1], n);
        int excluded = cut_it(A, L, n - 1);

        return max(included, excluded);
    }
    else
        return cut_it(A, L, n - 1);
}
//Function to find the maximum number of cuts.
int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here

    vector<int> A = {x, y, z};
    return cut_it(A, n, A.size());
}

int main()
{
    cout << maximizeTheCuts(7, 5, 5, 2) << endl;
}