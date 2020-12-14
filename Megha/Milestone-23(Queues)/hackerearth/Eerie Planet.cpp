#include <bits/stdc++.h>
using namespace std;

class crewMember{
    public:
   long long int crewHeight;
   int startTime;
   int endTime;
};

class person{
    public:
   long long int Height;
   int time;
};

crewMember crewMembers[100001] = {0};
int size = 0;
void crewMemberData(long long int crewHeight,int startTime,int endTime){
    crewMembers[size].crewHeight = crewHeight;
    crewMembers[size].startTime = startTime;
    crewMembers[size].endTime = endTime;
    size++;
}

bool check(struct person c){
    for(int i=0;i<size;i++){
        if(c.time<=crewMembers[i].endTime){
    if(c.time>=crewMembers[i].startTime){
            if(c.Height<=crewMembers[i].crewHeight){
                return false;
            }
        }
    }
}
    return true;
}

int main(){
   long long int hours,maxHeight=0;
   int crew, queries;
   cin>>hours>>crew>>queries;

   while(crew--){
       long long int crewHeight;
       int startTime,endTime;
       cin>>crewHeight>>startTime>>endTime;
       if(crewHeight > maxHeight){
           maxHeight = crewHeight;
       }
       crewMemberData(crewHeight,startTime,endTime);
   }

   while(queries--){
       struct person c;
       cin>>c.Height>>c.time;
       if(c.Height > maxHeight){
           cout<<"YES"<<endl;
       }
       else{
           if(check(c)){
               cout<<"YES"<<endl;
           }
           else
           cout<<"NO"<<endl;
       }
   }

   return 0;
}
