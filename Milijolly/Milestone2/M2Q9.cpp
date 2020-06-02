//Milestone 2
/*9.Modify the above question to allow student to sit if he/she has medical cause.
 Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.*/
 
 #include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{ float a,b,p,perc;
  char ch; int k;
	cout<<"Enter the number of classes held"<<endl;
	cin>>a;
	cout<<"Enter the number of classes attended"<<endl;
	cin>>b;
	p=(b/a);
	perc=p*100;
	cout<<perc<<"%"<<endl;
	
	cout<<"Do u have any medical cause(Y/N)? "<<endl;
	cin>>ch;
   	
   {
   	if(ch=='N'|| perc<75)
	cout<<"you are not allowed to sit in exam";
	else if(ch=='Y'&&perc>75)
	cout<<"you are allowed to sit in exam"; } 
	
    getch();
	return 0;
}
