#include <iostream>
using namespace std;
int main() {
    int n,strong,d,fact,num;
    cin>>n;
for(int i=1;i<=n;i++){
    num=i;
    strong=0;
    while(num>0){
         fact=1;
        d=num%10;
        for(int j=1;j<=d;j++){
            fact=fact*j;
        }
        strong=fact+strong;
        num=num/10;
    }
    if(strong==i){
        cout<<i<<",";
    }
}
return 0;
}
