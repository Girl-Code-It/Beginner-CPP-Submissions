#include<iostream>
using namespace std;
int main(){
	string s;
	int n,q,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		cin>>s;
		count=0;
		if(q==1){
			int pos=s.find('1');
			if(pos!=-1){
				count++;
			}
		}else{
			for(int j=0;j<q;j++){
				if(s[j]=='1'){
					for(int k=j+1;k<q;k++){
						if(s[k]=='1'){
							count++;
						}
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
