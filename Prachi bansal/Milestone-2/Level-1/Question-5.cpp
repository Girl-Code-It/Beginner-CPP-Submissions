#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the marks: ";
	cin>>x;
	if(x>0 && x<25){
		cout<<"F";
	}else if(25<x && x<45){
			cout<<"E";
		}else{
			if(45<x && x<50){
				cout<<"D";
			}else{
				if(50<x && x<60){
					cout<<"C";
				}else{
					if(60<x && x<80){
						cout<<"B";
					}else{
						if(x>80){
							cout<<"A";
						}
					}
				}
			}
		}
	return 0;
}
