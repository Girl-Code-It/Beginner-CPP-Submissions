include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
        cout<<hex<<showbase<<left<<nouppercase;
        cout<<(long long) A<<endl;
		
        cout<<setw(15)<<showpos<<setfill('_')<<right<<setprecision(2)<<fixed<<right<<dec;
        cout<<B<<endl;
        
        cout<<scientific<<noshowpos<<uppercase<<setprecision(9);
        cout<<C<<endl;
	}
	return 0;

}
