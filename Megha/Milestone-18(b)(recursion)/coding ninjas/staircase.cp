#include <iostream>
using namespace std;
int staircase(int n){
    if(n==0 || n==1){    //if we have to climb 1 or 0 staircase there is only one way in which we can do
        return 1;
    }
    if(n==2){   //if we have to climb 2staircase there are two ways in which we can do i.e (1,1) and 2
        return 2;
    }
    else{
        return staircase(n-3)+staircase(n-2)+staircase(n-1);    //else we will take sum of three previous terms
    }
}
int main() {
    int n;       //input number of stairs we have to climb
    cin>>n;
    cout<<staircase(n);     //calling function
}

//input 4
//output 7
