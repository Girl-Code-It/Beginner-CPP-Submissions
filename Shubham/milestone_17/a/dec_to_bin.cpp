#include<iostream>

using namespace std;

int bin=0, place=1;
int B(int n)
{

        if(n > 0)
        {
                bin += n%2* place;
                place *= 10;
                B(n/2);
        }
        return bin;
}
int main()
{
        int n;
        cin >> n;

        int binary = B(n);

        cout << binary << endl;
}
