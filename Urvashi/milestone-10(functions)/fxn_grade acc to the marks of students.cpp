#include<iostream>
using namespace std;
int grade(int);
int main()
{
	int marks;
	cout<<"enter your marks:"<<endl;
	cin>>marks;
	return grade(marks);
}
int grade(int marks)
{
  	if(marks>90&&marks<=100)
	cout<<"AA";
	else if(marks>80&&marks<=90)
	cout<<"AB";
	else if(marks>70&&marks<=80)
	cout<<"BB";
	else if(marks>60&&marks<=70)
	cout<<"BC";
	else if(marks>50&&marks<=60)
	cout<<"CD";
	else if(marks>40&&marks<=50)
	cout<<"DD";
	else
	cout<<"fail";
}
