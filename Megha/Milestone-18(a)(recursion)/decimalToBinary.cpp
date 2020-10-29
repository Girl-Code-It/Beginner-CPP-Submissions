#include <iostream>
using namespace std;
long DecimalToBinary(int decno){
    static long binno,r,pro=1;
     if(decno!=0){
         r = decno%2;
         binno = binno + r*pro;
         pro=pro*10;    
     DecimalToBinary(decno/2);
     }
     return binno;
}
int main() {
    int decno;
    long int binno;
    cin>>decno;
    binno=DecimalToBinary(decno);
    cout<<binno;
}
