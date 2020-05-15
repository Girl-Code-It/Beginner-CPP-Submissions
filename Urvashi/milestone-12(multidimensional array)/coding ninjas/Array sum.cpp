#include <iostream>
using namespace std;
int Coverage(int mat[3][3])  //question-5(array sum):-Given a n*m binary matrix that is, it contains 0s and 1s only,
{                              // we need to find and return sum of coverage of all zeros of the input matrix. 
    int res = 0;                //Coverage for a particular 0 is defined as, total number of ones around a zero (i.e. in left, right, up and bottom directions).
    for (int i = 0; i < 3;i++) 
    { 
        bool isOne = false;
        for (int j = 0; j < 3; j++) 
        {
            if (mat[i][j] == 1) 
                isOne = true;
            else if (isOne) 
                res++; 
        }
        isOne = false; 
        for (int j = 3-1; j >= 0; j--) 
        { 
           if (mat[i][j] == 1) 
                isOne = true; 
            else if (isOne) 
            res++; 
        }
    }
    for (int j = 0; j < 3; j++) 
    { 
        bool isOne = false;
        for (int i = 0; i < 3; i++) 
        { 
            if (mat[i][j] == 1) 
                isOne = true; 
            else if (isOne) 
                res++; 
        } 
        isOne = false; 
        for (int i = 3-1; i >= 0; i--) 
        { 
            if (mat[i][j] == 1) 
                isOne = true; 
            else if (isOne) 
                res++; 
        } 
    } 
cout<<"coverage is"<<" "<<res<<endl;
}
int main()
{
int m , n , A[3][3], i, j;
     cout<<"enter the binary  elements in the matrix A:";
	for(int i=0;i<3;i++)

	for(int j=0;j<3;j++)
	cin>>A[i][j];
	cout<<"the matrix A is="<<endl;
		for(int i=0;i<3;i++)
		{
	for(int j=0;j<3;j++)
	{
	cout<<A[i][j]<<"\t";}
	cout<<"\n";
	}
	Coverage(A) ;
}
