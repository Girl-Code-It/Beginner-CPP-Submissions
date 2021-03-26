#include<iostream>
using namespace std;

long long answer (long long N) {
long long start=5,end=1e10,mid,num,ans;
 while(start<=end)
        {   int count=0;
            mid= start + ((end-start)/2); // avid int overflow
            num=mid;
            while(num)
            {
                count+=num/5;
                num=num/5;
            }
            if(count<N)
                start= mid+1;
            else
                {end= mid-1;
                 ans=mid;}
        }
        return ans;
}

int main() {

    int T;
    cin >> T;
    while(T--)
    {
        long long N;
        cin >> N;
        cout<<answer(N)<<endl;
    }
}
