//you need to select the largest substring in which the count of 0 in the string is more than the count of 1
#include<bits/stdc++.h>
using namespace std;

int bsearch(vector<pair<int, int> >& preSum, int n, int val)

{
        int l = 0;
        int h = n - 1;
        int mid,ans = -1;
        while (l <= h) {

            mid = (l + h) / 2;
            if (preSum[mid].first <= val)
             {   
                 ans = mid;
                 l = mid + 1;    }

            else
                h = mid - 1;

}
return ans; }

bool compare(pair<int,int>a,pair<int,int>b)
{       
       if(a.first==b.first)

        {   return a.second<b.second;

        }

        else
            return a.first<b.first;
}

int main()

{

int n;

cin>>n;

string s;

cin>>s;

int a[n];

for(int i=0;i<s.length();i++)
    a[i]=s[i]-'0';


for(int i=0;i<n;i++)

{       if(a[i]==0)

            a[i]=1;
        else
            a[i]=-1;

}

int sum=0,ans=0;

vector<pair<int,int>>p;

for(int i=0;i<n;i++)

{

    sum+=a[i];

    p.push_back({sum,i});

}

sort(p.begin(),p.end(),compare);

int minin[n];

minin[0]=p[0].second;

for(int i=1;i<n;i++)

{
    minin[i]=min(minin[i-1],p[i].second);

}

int maxlen=0;

for(int i=0;i<n;i++)

{
    ans+=a[i];
    if(ans>0)

    {   maxlen=i+1;

    }
    else

    {
        int ind=bsearch(p,n,ans-1);
        if(ind!=-1 && minin[ind]<i)
        {
        maxlen=max(maxlen,i-minin[ind]);
        }
    }

}
cout<<maxlen;

}
