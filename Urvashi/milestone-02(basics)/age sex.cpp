#include<iostream>

using namespace std;

int main()

{
int age;
char sex,  status;

cout<<"enter your age, sex and marital status"<<endl;
cin>>age>>sex>> status;

if ( sex=='F')
{cout<<"you will work only in urban areas"<<endl;}
	
else if(sex=='M'&& age>20 && age<40)

{cout<<"you may work anywhere"<<endl;}	
	
else if (sex=='M' && age>=40 && age <60)	

{cout <<"you will work only in urban areas"<< endl;}

else {cout<<"error"<< endl;}	
}
