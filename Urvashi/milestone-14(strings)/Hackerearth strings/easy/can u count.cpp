// question : to find the no of ways by which we can replace all the underscores present in the string
// with the vowels present before it.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[100000];
        cin >> s;
        // initialise the no of a , e, i, o , u be 0. and also total count of all 5 vowels is initialised to be 0.
        int i, c = 0, cA = 0, cE = 0, cI = 0, cO = 0, cU = 0;
        // intitilise no of ways 'ans' to be 1 . becoz there will be minimum one no of way to do it.
        long long ans = 1;
        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'a' && cA == 0)
            {         // if a found and count of A was 0 before .
                c++;  // then count++
                cA++; // count of A also ++ // repeating this task for e, i, o , u also.
            }
            else if (s[i] == 'e' && cE == 0)
            {
                c++; // not to count one vowel more than once.
                cE++;
            }
            else if (s[i] == 'i' && cI == 0)
            {
                c++;
                cI++;
            }
            else if (s[i] == 'o' && cO == 0)
            {
                c++;
                cO++;
            }
            else if (s[i] == 'u' && cU == 0)
            {
                c++;
                cU++;
            }
            else if (s[i] == '_')
            {
                // if u find underscore then ans will be total no of vowels multiplied by ans which was
                // one initially.
                ans *= c; // no of ways will be multiplication of vowels present before each underscore.
            }
        }
        cout << ans << endl; // printing ans.
    }
}
