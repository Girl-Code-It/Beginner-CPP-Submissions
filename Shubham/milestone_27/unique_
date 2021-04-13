#include<iostream>
#include<vector>


using namespace std;

int main()
{
    int n;
    cin >> n;

    long A[n+1] = {0};

    A[0] = 1;
    A[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        int l = 0;
        int r = i - 1;

        while(l <= i-1)
        {
            A[i] += A[l] * A[r];
            l++;
            r--;
        }
    }
    cout << A[n] << endl;
}
