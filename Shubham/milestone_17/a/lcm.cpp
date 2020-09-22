#include<iostream>

using namespace std;
int ans;
int lcm(int a, int b)
{
        static int i = ( a > b) ? a : b;

        if(i%a ==0 && i%b==0)
                ans = i;
        
        else
        {
                i++;
                lcm(a, b);
        }

        return ans;
        
}
int main()
{
        int a, b;
        cin >> a >> b;

        cout << lcm(a, b) << endl;
}
