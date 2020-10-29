//Milestone 2
/*8.A student will not be allowed to sit in exam if his/her attendence is less than 75%.print
  percentage of class attended
  Is student is allowed to sit in exam or not */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{ float a,b,p,perc;
	cout<<"Enter the number of classes held"<<endl;
	cin>>a;
	cout<<"Enter the number of classes attended"<<endl;
	cin>>b;
	
	p=(b/a);
	perc=p*100;
	cout<<perc<<"%"<<endl;
	
	if(perc<75)
	cout<<"you are not allowed to sit in exam";
	else
	cout<<"you are allowed to sit in exam";
	
	getch();
	return 0;
}
