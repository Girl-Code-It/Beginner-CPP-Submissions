#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
using namespace std;

struct task{char name[10];int marks;int rank;};

int compare(const void*a,const void*b)
{
	struct task x=*(struct task*)a;
	struct task y=*(struct task*)b;
	if(x.marks>y.marks)
	return 1;
	else
	if(strcmp(x.name,y.name)==0 && x.marks==y.marks&&x.rank<y.rank)
	return 1;
	if(strcmp(x.name,y.name)<0&&x.marks==y.marks)
	return 1;
	return 0;
	
}
int main()
{
struct task t[10000];
int n;
cin>>n;
	for(int i=0;i<n;i++)
    {
    cin>>t[i].name;
    cin>>t[i].rank;
    cin>>t[i].marks;
	}
	qsort(t,n,sizeof(struct task),compare);
	for(int i=0;i<n;i++)
	{
    cout<<t[i].name<<" "<<t[i].rank<<" "<<t[i].marks<<endl;
	}
}
