/*
Given a 2D matrix, print all elements of the given matrix in diagonal order. 

Input Format
On first line you need to tell that how many rows and columns your matrix need to have and these values should be separated by space.
Then after that, each line will represent will represent each row and you need to enter numbers which each rows should have separated by a space.

Constraints
1 <= n,m <= 1000

Output Format
Print the resultant matrix in the diagonal wave from as specified to the stdout.

Sample TestCase 1
Input
5 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
Output
1 
5 2 
9 6 3 
13 10 7 4 
17 14 11 8 
18 15 12 
19 16 
20

*/
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n; 
    cin>>m;
    int arr[n][m];

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    cin>>arr[i][j];

    int k, t, l = 0;
    
    for(int i = 0; i < n + m - 1; i++)
    {
        k = i, t = 0;
        if(i >= n){ k = n - 1; t += i - n + 1; l++;}
        if(i == n) l += n - m;
        while(k >= 0 && t < m)
        cout<<arr[k--][t++]<<" ";
        cout<<endl;
    }
    
    return 0;
}