#include <iostream>
using namespace std;
int main() {
    int n,i;
    float *p,total=0;
    cout<<"Enter number of subjects"<<endl;
    cin>>n;
    p = new float[n];
    cout<<"Enter Marks"<<endl;
    for (i=0;i<n;i++){
        cout<<" Subject "<<(i+1)<<endl;
        cin>>p[i];
    }
    cout<<"Enter Marks"<<endl;
    for (i=0;i<n;i++){
        cout<<" Subject "<<(i+1)<<" ";
        cout<<p[i]<<endl;
        total = total + *(p+i);
    }
    cout<<"Total = "<<total;
    delete [] p;
	return 0;
}
