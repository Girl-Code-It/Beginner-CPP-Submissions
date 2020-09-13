#include <bits/stdc++.h>

using namespace std;
#define ll long  long int

int main()
{
    ll n,i=1;
    cin >> n;
    int temp;
    string s2;
    while(i<=n){
            string s1;
         int x;
        cin >> s1 >> x;
        if(i==1){
            temp=x;
            s2=s1;
        }else{
             if(x>temp){
                     temp=x;
                     s2=s1;
                       }else if(x==temp){
                        int i=s1.compare(s2);
                        i>0?s2=s1:s2;
                                       }
              }
              i++;
    }
        cout << s2 << endl;


    }
