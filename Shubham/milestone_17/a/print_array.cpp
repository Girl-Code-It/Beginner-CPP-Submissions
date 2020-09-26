#include<iostream>

using namespace std;

void print(int* A, int n)
{
        if(n<0)
                return;

        print(A, n-1);
        cout << A[n] << " ";
        
}

int main()
{
        int A[] = {11, 22, 33, 44, 55};
        print(A, 4);
}
