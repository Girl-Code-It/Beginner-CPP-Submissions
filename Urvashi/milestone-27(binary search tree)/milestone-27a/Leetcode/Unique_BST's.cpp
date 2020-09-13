#include <iostream>
#include<vector>
using namespace std;

int numTrees(int n) 
{
    vector<int> count(n+1 , 0);
    count[0] = 1;  // only 1 possiblity for 0 or 1 node.
    count[1] = 1;
    
    for(int i = 2; i <= n; i++) // calculating no of possible combinations for all subtrees.
    {
        for(int j = 0; j < i; j++)
            count[i] += (count[j]*count[i-j-1]); // j left and i-j-1 right subtrees as 1 is for root node.
    }
    return count[n]; // returning total combinations .
}
    
int main() {
	int t , n ;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<numTrees(n) << endl;
	}
	return 0;
}
