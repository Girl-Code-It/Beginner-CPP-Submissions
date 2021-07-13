#include<iostream>
using namespace std;
int main(){
	int n, first, last, temp;
	cout<<"Enter a number: ";
	cin>>n;
	first=n;
	while(first>10){
		 first = first/10;
	}

  last = n % 10;
  
  cout<<"Before swapping:"<<endl;
  cout<<"first digit = "<<first<<endl;
  cout<<"last digit = "<<last<<endl;
  
  temp=first;
  first= last;
  last = temp;
  cout<<"After swapping:"<<endl;
  cout<<"first digit = "<<first;
  cout<<" last digit = "<<last;
  return 0; 
  
  
}
