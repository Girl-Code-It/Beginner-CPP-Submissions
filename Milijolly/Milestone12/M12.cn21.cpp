/*Given a “m x n” matrix, count number of paths to reach bottom right from top left with maximum k turns allowed.*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int countPathsUtil(int i, int j, int k, int d) 
{ 

    if (i < 0 || j < 0) 
        return 0; 
  
    
    if (i == 0 && j == 0) 
        return 1; 
  

    if (k == 0) 
    {  
        if (d == 0 && i == 0) return 1; 
  
        
        if (d == 1 && j == 0) return 1; 
  
        return 0; 
    } 
  
     if (d == 0) 
      return  countPathsUtil(i, j-1, k, d) + 
                              countPathsUtil(i-1, j, k-1, !d); 
  

    return countPathsUtil(i-1, j, k, d) + 
                             countPathsUtil(i, j-1, k-1, !d); 
}     
        
   int countPaths(int i, int j, int k) 
{ 
    
    if (i == 0 && j == 0) 
          return 1; 

    else

    return countPathsUtil(i-1, j, k, 1) +  // Moving along row 
           countPathsUtil(i, j-1, k, 0); // Moving along column 
} 
   

int main() 
{ 
    int k,R,C;
    int mat[3][3];
	
	cout<<"enter the number of rows "<<endl;
	cin>>R;
	cout<<"enter the number of columns "<<endl;
	cin>>C;
	cout<<"enter the maximum turns allowed"<<endl;
	cin>>k;

	cout <<countPaths(R-1,C-1,k)<<endl;
    
    getch();
    return 0; 
}
