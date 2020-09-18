#include<iostream>

using namespace std;

int main()
{
        int n;
        cin >> n;

        int A[n];

        for(int i=0; i<n; i++)
                cin >> A[i];
        
        int Q;
        cin >> Q;       

        while(Q--)
        {
                int x;
                cin >> x;
                int sum=0, i; 
                for(i=n-1; i>=0; i--)
                {
                        if((sum + A[i]) >= x)
                                break;

                        sum += A[i];     
                }
                if(i%2 ==0)     cout << "A\n";
                else            cout << "B\n";
                

        }

}
