

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin >> t;
	while(t >= 0){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(isalpha(s[i])){
               s[i] = toupper(s[i]);
			   cout<<int(s[i]-64);
			}
			else{
				cout<<"$";
			}
		}
		cout<<endl;
		t--;
	}
    return 0;
}
