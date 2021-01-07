#include<iostream>

using namespace std;

int F(int* A, int n, int x)
{       
        for(int i=x+1; i<n; i++)
        {
                if(A[x] < A[i])
                        return i;
        }
        return -1;
}

int G(int* A, int n, int x)
{
        if(x == -1)
                return -1;
        for(int i=x+1; i<n; i++)
        {
                if(A[x] > A[i])
                        return i;
        }
        return -1;
}

int main()
{
		int n;
		cin >> n;
		int A[n];
		for(int i=0; i<n; i++)
			cin >> A[i];
        for(int i=0; i<n; i++)
        {
                int ans = G(A, n, F(A, n, i));
                if(ans == -1)
                        cout << "-1 ";
                else
                        cout << A[ans] << " ";
        }
        cout << endl;
}
