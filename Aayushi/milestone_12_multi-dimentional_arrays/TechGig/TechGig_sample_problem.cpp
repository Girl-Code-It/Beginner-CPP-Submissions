/*
 A pre poll survey was conducted for 5 candidates (C1,C2,C3,C4,C5) for the post of Prime Minister in 5
 states(S1,S2,S3,S4,S5). Each person surveyed was asked his favorite candidate for Prime Minister and the
 state which he belonged to. Write a program to show popularity of different candidate in different state surveyed.

Input Format
nput: It will be 2 dimensional array where:

First line will tell the total number of rows N to capture number of samples

Second line will tell the total number of columns

Next each consecutive N lines will contain state and candidate id combination separated by space.


Constraints
1<=N<= 1000

Output Format
It will be string array which tells the popularity of different candidates comma separated for different states S1 to S5.

*/
/*
Sample TestCase 1
Input
13
S1 C2
S2 C1
S1 C1
S3 C4
S1 C5
S4 C1
S5 C2
S1 C3
S2 C2
S4 C1
S5 C2
S3 C1
S4 C2
Output
1,1,1,0,0
1,0,0,0,0
1,0,0,1,0
2,1,0,0,0
0,1,0,0,0
*/
#include<iostream>
using namespace std;

int main()
{
	//Write code here
	string a, b;
    int N, i, k, j;
	int arr[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	cin>>N;
	if(N>=0 && N<=1000)
	{
		for(i=0; i<N; i++)
		{
			cin>>a>>b;
			if(a=="S1" && b=="C1")
				arr[0][0]++;
			else if(a=="S1" && b=="C2")
				arr[0][1]++;
			else if(a=="S1" && b=="C3")
				arr[0][2]++;
			else if(a=="S1" && b=="C4")
				arr[0][3]++;
			else if(a=="S1" && b=="C5")
				arr[0][4]++;
			else if(a=="S2" && b=="C1")
				arr[1][0]++;
			else if(a=="S2" && b=="C2")
				arr[1][1]++;
			else if(a=="S2" && b=="C3")
				arr[1][2]++;
			else if(a=="S2" && b=="C4")
				arr[1][3]++;
			else if(a=="S2" && b=="C5")
				arr[1][4]++;
			else if(a=="S3" && b=="C1")
				arr[2][0]++;
			else if(a=="S3" && b=="C2")
				arr[2][1]++;
			else if(a=="S3" && b=="C3")
				arr[2][2]++;
			else if(a=="S3" && b=="C4")
				arr[2][3]++;
			else if(a=="S3" && b=="C5")
				arr[2][4]++;
			else if(a=="S4" && b=="C1")
				arr[3][0]++;
			else if(a=="S4" && b=="C2")
				arr[3][1]++;
			else if(a=="S4" && b=="C3")
				arr[3][2]++;
			else if(a=="S4" && b=="C4")
				arr[3][3]++;
			else if(a=="S4" && b=="C5")
				arr[3][4]++;
			else if(a=="S5" && b=="C1")
				arr[4][0]++;
			else if(a=="S5" && b=="C2")
				arr[4][1]++;
			else if(a=="S5" && b=="C3")
				arr[4][2]++;
			else if(a=="S5" && b=="C4")
				arr[4][3]++;
			else if(a=="S5" && b=="C5")
				arr[4][4]++;
			else
				cout<<"invalid";
		}
		for(int k=0; k<5; k++)
        {
			for(int j=0; j<5; j++)
            {
				cout<<arr[k][j]<<",";
            }
            cout<<"\n";
        }
	}

}

