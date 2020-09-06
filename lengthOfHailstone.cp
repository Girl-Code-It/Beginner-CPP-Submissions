#include <iostream>
using namespace std;
int hailstoneSequence(int num){
    static int i;
    if(num==1 && i==0){
        return i;
    }
    else if(num==1 && i!=0){
        i++;
        return i;
    }
    else if(num%2==0){
        i++;
         return hailstoneSequence(num/2);
    }
    else if(num%2!=0){
        i++;
       return hailstoneSequence(3*num+1);
    }
    return i;
}
int main() {
    int ans,num,i;
    cin>>num;
    ans = hailstoneSequence(num);
    cout<<ans<<" ";
}

//hailstone sequence if 13 is input 13 40 20 10 5 16 8 4 2 1
//input 13
//output 10
