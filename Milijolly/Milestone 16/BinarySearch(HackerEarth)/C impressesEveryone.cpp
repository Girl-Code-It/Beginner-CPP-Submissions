#include <iostream>
using namespace std;

int main() {
    long long n,q,x,a[1000001],prearr[1000001];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    prearr[n-1]=a[n-1];
    for (int i = n-2; i >=0; i--)
		prearr[i] = a[i] + prearr[i + 1];
    cin>>q;
    while(q--)
    {   cin>>x;
        long long start,end,mid;
        start=0;
        end= n-1;
        while(start<=end)
        {   
            mid= start +((end-start)/2);
            if(prearr[mid]>=x&&prearr[mid+1]<x)
                break;
            else if(prearr[mid]>x)
                start=mid+1;
            else
                end= mid-1;
        }

        if(mid%2==0)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }

							
}


