#include<bits/stdc++.h>
using namespace std;
int main(){
	int classes_held,classes_attended;
	float s;
	char medical;
	cin>>classes_held;
	cin>>classes_attended;
	cin>>medical;
	cout<<"No. of classes held "<<classes_held<<endl;
	cout<<"No. of classes attended "<<classes_attended<<endl;
	s=(classes_attended*100)/classes_held;
	if(s>=75 && (medical=='Y'||medical=='N')){
		cout<<"Allowed to sit in exam"<<endl;
	}else if(s<75 && medical=='Y'){
		cout<<"Allowed to sit in exam"<<endl;
	}else if(s<75 && medical=='N'){
		cout<<"Not allowed to sit in exam"<<endl;
	}
	return 0;
}
