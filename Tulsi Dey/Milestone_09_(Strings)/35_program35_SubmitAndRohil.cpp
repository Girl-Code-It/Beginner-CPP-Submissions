#include <bits/stdc++.h>

using namespace std;

int getGroups(string arr[], string brr[], int n)
{
    int count = 0, aux = 0;
    string s1, s2;

    for(int i = 0; i < n; i++)
    {
        s1 = arr[i];
        if(arr[i] != "")
        for(int j = 0; j < n; j++)
        {
            s2 = arr[j];

            if(arr[j] != "" && ((s1[0] == s2[0] && s1[s1.length()-1] == s2[s2.length()-1]) && brr[i] == brr[j]))
            {
                arr[j] = "";
                aux = 1;
            } 
        }
        count += aux;
        aux = 0;
    }
    return count;
}
int main()
{
	int n; cin>>n;
    string arr[n+1] = {""}, brr[n+1] = {""};

    for(int i = 0; i < n; i++)
    {
		cin>>arr[i];
		brr[i] = arr[i];
	}

    for(int i = 0; i < n; i++)
    sort(brr[i].begin(), brr[i].end());

    cout<<getGroups(arr, brr, n)<<endl;

	return 0;
}

//Alternate solution using set

/*

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 

    set<string> set;
    int n; cin>>n;
    string s;

    for(int i = 0; i < n; i++)
    {
        cin>>s;
        sort(s.begin()+1, s.end()-1);
        set.insert(s);
    }

    cout<<set.size();

    return 0;
}

*/