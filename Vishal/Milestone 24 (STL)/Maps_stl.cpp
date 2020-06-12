#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int q,y,type;
    string x;

    map<string,int>students;

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> type >> x;

        if(type == 1)
        {
            cin >> y;
            students[x] += y;
        }
        else if(type == 2)
        {
            students.erase(x);
        }
        else
        {
            cout << students[x] << "\n";
        }
    }

    return 0;
}