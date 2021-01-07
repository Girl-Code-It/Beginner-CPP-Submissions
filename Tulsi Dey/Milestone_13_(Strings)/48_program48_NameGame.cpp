#include <iostream>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int n; cin>>n;
		string s, res = ""; cin>>s;

		char arr[] = {'C', 'G', 'I', 'O', 'S', 'Y','a', 'e', 'g', 'k', 'm', 'q'};

		for(int i = 0; i < n; i++)
		{ 
                for(int j = 0; j < 12; j++)
			{   if(s[i] <= arr[0]) { res += arr[0]; break;}
                if(s[i] >= arr[11]) { res += arr[11]; break;}
				if(s[i] == arr[j])
				{
					res += arr[j];
					break;
				} 
				else if(s[i] < arr[j+1])
				{
                    char g = ' ';
                    if(abs(s[i]-arr[j]) == abs(s[i]-arr[j+1])) g = min(arr[j], arr[j+1]);
                    else if(min(abs(s[i]-arr[j]),abs(s[i]-arr[j+1])) == abs(s[i]-arr[j])) g = arr[j];
                    else g = arr[j+1];
					res += g;
					break;
				}
			}
        }
		cout<<res<<endl;
	}
	return 0;
}