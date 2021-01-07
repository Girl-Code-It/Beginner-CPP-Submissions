#include<iostream>
using namespace std;
int main(){
int x,i;
cout<<"Enter a number : "	;
cin>>x;
for(i=2;x>1;i++)
while(x%i==0){
cout<<i<<endl;
x=x/i;
}

}
