#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	char sex,martial;
	cin>>age;
	cin>>sex;
	cin>>martial;
	if(sex=='F' && (age>=20 && age<=60)){
		cout<<"Employee will only work in urban areas"<<endl;
	}else if(sex=='M' && (age>=20 && age<40)){
		cout<<"Emplyee will work anywhere"<<endl;
	}else if(sex=='M' && (age>=40 && age<=60)){
		cout<<"Employee will work only in urban areas"<<endl;
	}else{
		cout<<"Error";
	}
}