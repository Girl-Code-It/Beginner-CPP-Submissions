#include <iostream>
using namespace std;
int minStepsToOne(int n){
    static int count = 0;     //number of steps to return number to one 
   if(n==1){            //if number become equal to one then we will return number of steps that is count
       return count;
   }
   if(n%3==0){           //if number become equal to multiple of three then we will return number/3 and increase count
       count++;
       return minStepsToOne(n/3);
   }
   if(n%2==0){          //if number become equal to multiple of two then we will return number/2 and increase count
       count++;
       return minStepsToOne(n/2);
   }
   else{
       count++;
       return minStepsToOne(n-1);   //else we wil subtract number by one
   }
}
int main() {
    int n;       //input number 
    cin>>n;
    cout<<minStepsToOne(n);     //calling function
}

//input 7
//output 3
