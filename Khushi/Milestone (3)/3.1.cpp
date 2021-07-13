#include<iostream>
using namespace std;
int main(){
	int n, first, last;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	first=n;
	while(first>10){
		 first = first/10;
	}

  last = n % 10;
  
  cout<<"first digit is "<<first<<endl;
  cout<<"last digit is "<<last<<endl;
  return 0;
  
}
