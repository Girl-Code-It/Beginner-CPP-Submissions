#include<iostream>
using namespace std;

int main()
{
	int x,y;
	
	cin>>x>>y;
	
	bool isOpposite = ((x ^ y) < 0);
	
	if( isOpposite == true){
		cout<<"Opposite sign";
	}else{
		cout<<"Same sign";
	}
	return 0;
}
