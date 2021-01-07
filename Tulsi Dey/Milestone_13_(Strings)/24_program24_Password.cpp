
#include <iostream>

using namespace std;
string palin(string str)
{
	string rev;

    for(int i = 0; i < str.length(); i++)
    rev += str[str.length() - 1 - i];

    return rev;
}
void getRes(string str[], int n)
{
	for(int i = 0 ; i < n; i++)
	{
		for(int j = i + 1 ; j < n; j++)
		{
			if(palin(str[i]) == str[j])
			{
                string k = str[i];
				cout<<k.length()<<" "<<k[k.length()/2];
				return;
			}
		}
	}
}
int main() {
	int n; cin >> n;	
    string str[n];
	for(int i = 0 ; i < n; i++)
	cin>>str[i];
    
	getRes(str,n);
	
	return 0;		
}

