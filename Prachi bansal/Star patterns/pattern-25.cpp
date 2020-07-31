#include<iostream>
using namespace std;
int main(){
	int k=0,h=0;
	for(int i=1;i<=21;i++){
		if(i<=11){
			k=i-1;
		}else{
			k=21-i;
		}
		for(int j=1;j<=21;j++){
			if(i<11){
				if(j>=12-i && j<=10+i){
					if(k>=10){
						cout<<k-10;
					}else{
						cout<<k;
					}
					if(j<=10){
						k++;
					}else{
						k--;
					}
				}else{
					cout<<" ";
				}
			}else if(i==11){
				if(h>=10){
					cout<<h-10;
				}else{
					cout<<h;
				}
				if(j<=10){
					h++;
				}else{
					h--;
				}
			}else{
				if(j>=i-10 && j<=32-i){
					if(k>=10){
						cout<<k-10;
					}else{
						cout<<k;
					}
					if(j<=10){
						k++;
					}else{
						k--;
					}
				}else{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
