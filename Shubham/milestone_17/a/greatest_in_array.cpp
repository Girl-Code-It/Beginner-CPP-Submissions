#include<iostream>

using namespace std;

int ans=-1000;

  int G(int* A, int n) 
{
        if(n >= 0)
        {
                if(ans < A[n])
                        ans = A[n];
                G(A, n-1);
        }
        return ans;
}

int main()
{ 
        int A[] = { 5, 6, 4, 3, 6};
        int greatest = G(A, 4);                                                              

        cout << greatest << endl;
}
