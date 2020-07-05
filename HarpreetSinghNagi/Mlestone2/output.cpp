/*If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10) */


#include <iostream>

using namespace std;

int main()

{
	bool result1 {false};
	bool result {true};

	int x{2},y{5},z{0};
	cout<< result1<<endl<<result;
	 result1=(x== 2);
	 result=(x==2);
	 cout<<result1<<endl;
	 cout<<result<<endl;
	 result1=(x != 2);
	 result=(x!=2);
	 cout<<result1<<endl<<result;
 	

 	return 0;




}