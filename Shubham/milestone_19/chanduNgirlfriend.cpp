#include <iostream>

using namespace std;

void merge(int *A, int *B, int n, int m, int *C)
{
    int i, j, k;
    i = j = k = 0;

    while (i < n && j < m)
    {
        if (A[i] > B[j])
            C[k++] = A[i++];

        else
            C[k++] = B[j++];
    }
    while (i < n)
        C[k++] = A[i++];
    while (j < m)
        C[k++] = B[j++];
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int m, n;
        cin >> n >> m;
        int A[n], B[m], C[m + n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];

        merge(A, B, n, m, C);

        for (int i = 0; i < m + n; i++)
            cout << C[i] << " ";
        cout << endl;
    }
}
