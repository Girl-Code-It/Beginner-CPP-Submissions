/* A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade. */

#include<iostream>
using namespace std;
int main()
{
    int Marks;
    cout<<"Enter Marks for evaluation";
    cin>>Marks;
    if(Marks<=25)
    {
        cout<<"F";
    }
    else if(Marks>25 && Marks<=45)
    {
        cout<<"E";
    }
    else if(Marks>45 && Marks<=50)
    {
        cout<<"D";
    }
    else if(Marks>50 && Marks<=60)
    {
        cout<<"C";
    }
    else if(Marks>60 && Marks<=80)
    {
        cout<<"B";
    }
    else if(Marks>80 && Marks<=80)
    {
        cout<<"A";
    }

}
