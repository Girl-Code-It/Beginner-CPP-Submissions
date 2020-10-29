

#include <iostream>
using namespace std;
int main() {
   int N;
   cin>>N;
   int W,H,count = 0;
   while(N--){
       
       cin>>W>>H;
       double ans;
	   if(W>H){
        ans = (double)W/H;}
		else if(H>W){
        ans = (double)H/W;}
       if(ans >= 1.6 && ans<=1.7){
           count++;       
       }   
   }
   cout<<count;
}
