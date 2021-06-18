#include<bits/stdc++.h>
using namespace std;
int area(int r){
	int A;
	A=(22*r*r)/7;
	return A;
}
int circumference(int r){
	int C;
	C=(2*22*r)/7;
	return C;
}
int main(){
	int r;
	cin>>r;
	cout<<"Area of crcle is "<<area(r)<<endl;
	cout<<"Circumference of circle is "<<circumference(r)<<endl;
	return 0;
}
