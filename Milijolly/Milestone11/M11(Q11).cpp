//If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], your program should be able to find that the subarray lies between the indexes 3 and 8. 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60},max,min,i,j,k;

  
 for( i=3;i<9;i++)
 {
 	 for ( j=i; j<9; j++) 
        {  
            for ( k=i; k<=j; k++) 
                cout << a[k] << " "; 
  
            cout << endl; 
        } 
 	
 }	
    
getch();
return 0;
}






