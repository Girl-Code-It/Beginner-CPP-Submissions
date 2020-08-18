#include<iostream>
using namespace std;
int age(int y, int m, int d){
	int DD,MM,YYYY,year,month,day;
	cout<<"Enter current date: ";
	cin>>DD>>MM>>YYYY;
	if(m>MM){
		year=YYYY-y-1;
		month=11-(m-MM);
		if(d>DD){
			day=31-(d-DD);
		}else{
			day=DD-d;
		}
	}else{
		year=YYYY-y;
		if(d>DD){
			day=30-(d-DD);
			month=MM-m-1;		
		}else{
			day=DD-d;
			month=MM-m;
		}
	}
	cout<<"Age is: "<<year<<" years "<<month<<" month "<<day<<" days ";
	return 0;
}

main(){
	int mm,dd,yyyy;
	cout<<"Enter your birthday date: ";
	cin>>dd>>mm>>yyyy;
	age(yyyy,mm,dd);
	
}
	
