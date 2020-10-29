/*
2D Array - Matrix in diagonal Order (100 Marks)
Given a 2D matrix, print all elements of the given matrix in diagonal order.

Input Format
On first line you need to tell that how many rows and columns your matrix need to
have and these values should be separated by space.
Then after that, each line will represent will represent each row and you need to
enter numbers which each rows should have separated by a space.

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
Time Limit(X):
1.00 sec(s) for each input.
Memory Limit:
512 MB
Source Limit:
100 KB
*/
#include <iostream>
using namespace std;
int main()
{
    //Write code here
    int m, n, x=0, y=0, i=0, j=0;
    cin>>m>>n;
  if(n>=1 && m <= 1000 && m>=1 && n<=1000)
  {
        int arr[m][n];
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(x=0; x<m+n-1; x++)
        {
            if(x<m)
            {
                i=x;
            }
            else
            {
                i=m-1;
                y++;
            }
            if(x<m)
            {
                for(j=0; i+j==x && j<x+1 && j<n; j++)
                {
                    cout<<arr[i][j]<<" ";
                    i--;
                }
                cout<<"\n";
            }
            else
            {
                for(j=y; i+j==x && j<x+1 && j<n  ; j++)
                {
                    cout<<arr[i][j]<<" ";
                    i--;
                }
                if(x<m+n-2)
                    cout<<"\n";
            }
        }
  }
}
