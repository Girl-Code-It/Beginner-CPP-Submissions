#include<iostream>

using namespace std;

int main()
{
	int number,count{0};
	cout<<"enter number";
	cin>>number;

	for(int i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
        	cout<<"perfect square";
        	count++;
        	break;
        }


    }
    

		        if(count!=1)
		        {
                 cout<<"not";    
		        }


	return 0;
}