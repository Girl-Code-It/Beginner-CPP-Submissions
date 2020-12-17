#include<iostream>
using namespace std;
int main()
{

     int i=0,j=0,k=0,m,n;
	 std::cin>>m>>n;
     int a[m][n];
	 for(i=0;i<m;i++)
	 {
		 for(j=0;j<n;j++)
		 std::cin>>a[i][j];
	 }
	 for(k=0;k<m;k++)
	 {
		 i=k;
		 j=0;
		 while(i>=0 && j<n)
		 {
			 std::cout<<a[i][j];
			 i=i-1;
			 j=j+1;
		 }
		 std::cout<<endl;
	 }
	 for(k=1;k<n;k++)
         {
			 j=k;
			 i=m-1;
			 while(j<n && i>=0)
			 {
				 std::cout<<a[i][j];
				 j=j+1;
				 i=i-1;
			 }
              std::cout<<endl;
		 }
		 return 0;
}
