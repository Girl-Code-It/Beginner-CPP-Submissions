//find subsequences of a string
//for abc: a,b,c,ab,bc,ac,abc
//total sequences are 2^n
// a b c
// 0 0 0
// 0 0 1
// 0 1 0
// 0 1 1
// 1 0 0
// 1 0 1
// 1 1 0
// 1 1 1

#include<iostream>
#include<cstring>
using namespace std;
void filterChars(char *a,int no){
	// a = "abc" no = 5 .. Output should be ac.
	int i=0;
	while(no>0){
		((no&1)?cout<<a[i]:cout<<"");
		i++;
		no=no>>1;
	}
	cout<<endl;
}
void generateSubsets(char *a,int n){
	//generate a range of numbers from 0 to 2^n-1
	int range = (1<<n) -1;
	for(int i=0;i<=range;i++){
		filterChars(a,i);
	}
}
int main(){
	int n,i;
	char a[100];
	cin>>a;
	n = strlen(a);
	generateSubsets(a,n);
	return 0;
}
