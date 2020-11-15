#include <iostream>
using namespace std;
int computeBits(int no){
    int count=0;
   while(no>0){
        if(no&1){
            count++;
        }
         no=no>>1;
    }
    return count;
}

int main() {
    int no;
    cin>>no;
    cout<<computeBits(no);
}
