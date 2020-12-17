// PROGRAM TO COMPARE TWO NUMBERS USING FUNCTIONS

#include<iostream>
using namespace std;

float comparison (float x , float y)
{
    if (x>y)
        return x;
    else
    return y;
}

  int main ()
  {
      float num1,num2;
      cout<<"ENTER THE NUMBERS TO BE COMPARED \n";
      cin>>num1>>num2;

      cout<<"THE GREATER NUMBER IS  "<<comparison(num1,num2);
      return 0;

  }
