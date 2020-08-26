#include<iostream>
#include<string>
#define MAX 100

using namespace std;

string reverse(string);
int main()
{
    int n, len;
    cin >> n;
    string s[n], rev;
    char center;
    int i;
    //storing all passwords in an string array
    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }

    for(i=0; i<n; i++)
    {
        //reverse of string
        rev = reverse(s[i]);
        for(int j=i+1; j<n; j++)
        {
            if(rev == s[j])
            {
                len = s[j].length();
                center = s[j][((len+1)/2)-1];
                break;

            }
        }
    }
    cout << len << " " << center << endl;

}

string reverse(string s)
{
    string rev;
    int end = s.length()-1, i=0;

    while(end >= 0)
    {
        rev += s[end];
        end--, i++;
    }
    return rev;
}
