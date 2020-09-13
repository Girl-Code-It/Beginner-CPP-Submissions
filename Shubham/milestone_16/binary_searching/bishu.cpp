#include<iostream>

using namespace std;
void sort(int*, int);
int main()
{
        int N;
        cin >> N;

        int A[N];

        for(int i=0; i<N; i++)
                cin >> A[i];

        int Q;
        cin >> Q;
        sort(A, N);
        while(Q--)
        {
                int b_power, def_enem =0;
                cin >> b_power;
                int sum=0;
                for(int i=0; i<N; i++)
                {       
                        if(A[i] <= b_power)
                        {
                                def_enem++;
                                sum += A[i];
                        }
                }
                cout << def_enem << " " << sum << endl;

        }
}

void sort(int* A, int N)
{
        for(int i=0; i<N; i++)
        {
                for(int j=i+1; j<N; j++)
                {
                        if(A[i] > A[j])
                        {
                                int temp = A[i];
                                A[i] = A[j];
                                A[j] = temp;
                        }
                }
        }
}

