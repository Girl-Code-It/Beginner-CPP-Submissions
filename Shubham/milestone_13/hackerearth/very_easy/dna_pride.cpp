#include<iostream>

using namespace std;

int main()
{
    //program of DNA pride

    int t, b;
    string seq;
    cin >> t;
    int j;

    for(int i=0; i<t; i++)
    {
        cin >> b;
        char ans[b];
        cin >> seq;
        int flag =0;
        for(j=0; seq[j] != '\0'; j++)
        {
            if(seq[j] == 'U')
            {
                
                cout << "Error RNA nucleobases found!" << endl;
                flag =1;
                break;
            }
            else
            {
                if(seq[j] == 'A')
                    ans[j] = 'T';
                else if(seq[j] == 'T')
                    ans[j] = 'A';
                else if(seq[j] == 'G')
                    ans[j] = 'C';
                else if(seq[j] == 'C')
                    ans[j] = 'G';
            }    
        }
        ans[j] = '\0';
        if(flag == 0)
            cout << ans << endl;

    }
}
