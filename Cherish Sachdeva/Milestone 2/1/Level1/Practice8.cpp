#include<bits/stdc++.h>
using namespace std;
int main(){
	int classes_held,classes_attended;
	float s;
	cin>>classes_held;
	cin>>classes_attended;
	cout<<"No. of classes held "<<classes_held<<endl;
	cout<<"No. of classes attended "<<classes_attended<<endl;
	s=(classes_attended*100)/classes_held;
	cout<<s<<endl;
	string c=s>=75?"Allowed to sit in exam":"Not allowed to sit in exam";
	cout<<c;
	return 0;
}
