#include<iostream>
#include<cstdlib>

using namespace std;
int GCD(int, int);
int F(int);

int main()
{
        //hexadecimal Number
        int t;

        cin >> t;

        while(t--)
        {
                int L, R, ans=0;
                cin >> L >> R;

                for(int x=L; x<=R; x++)
                {
                        if(GCD(x, F(x)) > 1)
                                ans++;
                }
                cout << ans << endl;
        }


}

int GCD(int x, int y)
{
        int l = (x < y) ? x : y;
        int gcd=1;
        for(int i=2; i<=l; i++)
        {
                if(x%i == 0 && y%i ==0)
                        gcd = i;
        }
        return gcd;
}

//F() will return sum of digits of X in it's Hex form

int F(int x)
{
        string hex;
        //converting number to hex 
        while(x != 0)
        {
                int rem = x%16;
                x/=16;
                
                if(rem < 10)
                        hex += rem + 48;
                else
                        hex += rem + 55;                   
        }
        //evaluating Function
        int ret=0;
        for(int i=0; i<hex.length(); i++)
        {
                if(hex[i] >= 65)
                        ret += (hex[i] - 55);
                else
                        ret += hex[i] - 48;
                
        }
        return ret;
}
