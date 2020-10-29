#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string a, b;

        cin >> a >> b;
        int d, arr[a.length()], flag = 0;
        for(int i=0; i<a.length(); i++)
        {
            if(b[i] > a[i])
            {
                d = b[i] - a[i];
                arr[i] = d;
            }
            else
            {
                d = ('Z' - a[i]) + (b[i] - 'A' + 1);
                arr[i] = d;
            }    
        }

        //checking if array elements are same
        for(int j=0; j<a.length(); j++)
        {
            if(arr[0] != arr[j])
            {
            flag = 1;
            break;
            }
        }
        if(flag == 0)   cout << d%26 << endl;
        else    cout << -1 << endl;
    }
}

