//q4- ask the user to enter the marks and print the grade according to the grading system.
#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter your marks - ";
	cin>>m;
	if(m<=25)
	{cout<<"GRADE- F.";
	}
	else if(m>25 && m<=45)
	{cout<<"GRADE- E.";
	}
	else if(m>45 && m<=50)
	{cout<<"GRADE- D.";
	}
	else if(m>50 && m<=60)
	{cout<<"GRADE- C.";
	}
	else if(m>60 && m<=80)
	{cout<<"GRADE- B.";
	}
	else if(80<m)
	{cout<<"GRADE- A.";
	}
	return 0;
}
