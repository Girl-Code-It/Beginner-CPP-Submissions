#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
        int T;
        cin >> T;
        int trans[T];
        for(int i=0; i<T; i++)
                cin >> trans[i];
        int Q;
        cin >> Q;
        int query[Q];
        
        for(int i=0; i<Q; i++)
                cin >> query[i];
       
        for(int i=0; i<Q; i++)
        {
                int sum=0;
                for(int j=0; j<T; j++)
                {
                        sum += trans[j];
                        if(sum >= query[i])
                        {
                                cout << j+1 << endl;
                                break;
                        }
                }
                if(sum < query[i])
                        cout << -1 << endl;
        }
}
