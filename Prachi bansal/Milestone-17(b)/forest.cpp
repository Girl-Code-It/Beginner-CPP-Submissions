#include <iostream>
using namespace std;
char forest[1000][1000]; //AS I HAVE USED THESE VARIABLES IN BOTH FXNS SO I DECLARED THEM GLOBALLY..
int n;
int count = 0;
int forest_size(int row, int col)
{

	if (row >= n || col >= n || row < 0 || col < 0) //CHECKING THE TERMINATION CONDITIONS
		return 0;
	if (forest[row][col] == 'T') //IF T IS FOUND AT ANY POSITION
	{
		count++;				   //INCREASE THE SIZE OF FOREST
		forest[row][col] = 'W';	   //AND TO REMOVE CONFUSION PUT 'W' AT THAT POSITION
		forest_size(row + 1, col); //NOW CHECK ON ITS RIGHT
		forest_size(row, col + 1); //BOTTOM
		forest_size(row - 1, col); //LEFT
		forest_size(row, col - 1); //UP
	}
	return count; //RETURN THE FOREST SIZE
}
int main()
{
	int x = 0; //TAKING A VARIABLE X AND INITIALISE IT TO 0.
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> forest[i][j]; //TAKE INPUT
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (forest[i][j] == 'T') //IF T FOUND
			{
				forest_size(i, j); //WHOLE PROCEDURE OF FXN forest_size IS FOLLOWED
				if (count > x)	   //IF SIZE OF FOREST IS GREATER THAN 0.
					x = count;	   //GIVE VALUE OF COUNT TO X.
				count = 0;		   //TO PREVENT RECOUNTING..
			}
		}
	}
	cout << x << endl; //PRINT FOREST SIZE..
}
