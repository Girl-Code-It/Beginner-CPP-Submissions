#include<iostream>

using namespace std;

int main()
{
        int t;
        cin >> t;
        while(t--)
        {
                int N, K, P, temp;
                cin >> N >> K >> P;

                for(int i=0; i<K; i++)
                {
                        cin >> temp;

                        if(temp <= P)
                                P++;
                }
                if(P <= N)
                        cout << P << endl;
                else 
                        cout << -1 << endl;
        }
}
