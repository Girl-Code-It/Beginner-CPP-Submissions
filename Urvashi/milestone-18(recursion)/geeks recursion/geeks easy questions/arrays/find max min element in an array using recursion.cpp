#include<bits/stdc++.h>
#include<stdlib.h>
#include<limits.h>
using namespace std;
int min=INT_MAX,max=INT_MIN;
void find_max_min(int *a,int n)
{
static int i=0;
if(i==n)
return ;
if(*(a+i)>max)
max=*(a+i);
else if(*(a+i)<min)
min=*(a+i);
i++;
find_max_min(a,n);	
}
int main()
{
int n;
int a[n];
for(int i=0;i<n;i++)
cin>>*(a+i);
find_max_min(a,n);
cout<<"maximum element is= "<<max<<endl;
cout<<"minimum element is= "<<min<<endl;
}
