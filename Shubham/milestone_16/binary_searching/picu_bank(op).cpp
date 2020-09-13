#include <iostream>

using namespace std;

int main()
{
        int t;
        cin >> t;

        while (t--)
        {

                int D, A, M, B, X;
                cin >> D >> A >> M >> B >> X;
                int month = 0, total = D, m = 0;
                while (1)
                {
                        if (month == M)
                        {
                                month = 0;
                                total += B;
                                m++;
                        }
                        else
                        {
                                total += A;
                                month++;
                                m++;
                        }

                        if (total >= X)
                                break;
                }
                cout << m << endl;
        }
}
