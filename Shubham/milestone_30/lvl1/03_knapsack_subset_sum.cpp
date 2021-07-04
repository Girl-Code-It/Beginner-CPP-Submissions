#include<bits/stdc++.h>

using namespace std;

bool isSubsetPresent(int A[], int sum, int n)
{
    if(sum == 0)
        return true;

    if(n == 0)
        return false;

    if(A[n-1] <= sum)   
        return (isSubsetPresent(A, sum - A[n-1], n-1) or isSubsetPresent(A, sum, n-1));

    else
        return isSubsetPresent(A, sum, n-1);
}

int main()
{
    int A[] = {2, 3, 7, 8, 10};
    if(isSubsetPresent(A, 10, 5))
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}