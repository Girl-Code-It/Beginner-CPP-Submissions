#include<bits/stdc++.h>
using namespace std;
class crewmember
{
	public:
    long long int height;
    int st;
    int et;
};
 
class cust
{
	public:
    long long int height;
    int t;
};
 
 crewmember crewmembers[100001] = {0};
 int crew_size = 0;
void enq(long long int height ,int st, int et)
{
    crewmembers[crew_size].height = height;
    crewmembers[crew_size].st = st;
    crewmembers[crew_size].et = et;
    crew_size++;
}
 
int chk(struct cust c){
    bool flag = true;
    for(int i =0; i < crew_size;i++){
        if(c.t <= crewmembers[i].et){
                if(c.t>= crewmembers[i].st){
                    if(c.height <= crewmembers[i].height){
                       flag = false;
                       break;
                    }
                }
        }
    }
    return flag;
}
int main(){
 long long int H , maxh = 0;
 int C,Q;
 cin>>H>>C>>Q;
 while(C--){
    long long int h;
	int st,et;
    cin>>h>>st>>et;
    if(h > maxh){
        maxh = h;
    }
    enq(h,st,et);
 }  
 while(Q--){
     struct cust c;
     cin>>c.height>>c.t;
     if(c.height > maxh){
         cout<<"YES"<<endl;
     }
     else{
         bool flag = chk(c);
         if(flag){
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
         }
     }
 }
 return 0; 
}
