#include<iostream>
using namespace std;

void grade(int x){
	if(x>90 && x<=100)
	  cout<<"\n Grade: AA";
	else if(x>80 && x<=90)
	  cout<<"\n Grade: AB";
	else if(x>70 && x<=80)
	  cout<<"\n Grade: BB";
	else if(x>60 && x<=70)
	  cout<<"\n Grade: BC";
	else if(x>50 && x<=60)
	  cout<<"\n Grade: CD";
	else if(x>40 && x<=50)
	  cout<<"\n Grade: DD";
	else if(x<=40)
	  cout<<"\n Grade: Fail";
}
int main(){
	int m;
	cout<<"\n Enter your marks:";
	cin>>m;
	grade(m);
	return 0;
}
