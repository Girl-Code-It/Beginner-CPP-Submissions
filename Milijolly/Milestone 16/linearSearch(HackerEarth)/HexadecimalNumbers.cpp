#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int l,r,count=0;
        cin>>l>>r;

        while(l<=r)
        {
            int hexa=0,num;
            num=l;
            while(num)
            {
                hexa+= (num % 16);
                num = num/16;
            }

            if(__gcd(l, hexa)>1)
                count++;
         l++;
        }
        cout<<count<<endl;
    }
	
}
