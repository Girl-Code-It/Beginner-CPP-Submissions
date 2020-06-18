/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
9.
Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly*/

#include <iostream>

using namespace std;

int main()

{
	int held, attend , a;
	char med;

	cout<<"Enter the total number of class that held ";
	cin>>held;
	cout<<"Enter the munber for which for which u attend the class ";
	cin>>attend;
	cout<<"Enter Y if u have any medical history and N for not";
	cin>>med;

	a= (attend/held)*100;


	if(a>75)
	{
	cout<<"You can sit in exam";
	}

	else if (a<75 && (med=='Y' ||  med=='y'))
	{
	cout<<"You can sit in exam";
	}

	else
	cout<<"You can't sit in exam";

	return 0;

	



	
}