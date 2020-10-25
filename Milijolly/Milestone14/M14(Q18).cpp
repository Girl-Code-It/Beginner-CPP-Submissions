//Can you count
#include<bits/stdc++.h>
using namespace std;

  int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[100000];
        cin>>s;
        int c=0,ca=0,ce=0,ci=0,co=0,cu=0;
        long long ans=1;
        for(long i=0; i<strlen(s); i++)  //check  the vowels presnt
        {
            if(s[i]=='a' && ca==0)
            {
                c++;                       //increasing count for each vowel only once                              
                ca++;                       //counting each vowel only once
            }
            else if(s[i]=='e' && ce==0) {
                c++;
                ce++;
            }
            else if(s[i]=='i' && ci==0) {
                c++;
                ci++;
            }
            else if(s[i]=='o' && co==0) {
                c++;
                co++;
            }
            else if(s[i]=='u' && cu==0) {
                c++;
                cu++;
            }
            else if(s[i]=='_') {    //Each underscore can be replaced with any one of the vowel(s) 
                ans*=c;          //multipling the anser with no of vowels counted once 
            }
            else 
            continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}
