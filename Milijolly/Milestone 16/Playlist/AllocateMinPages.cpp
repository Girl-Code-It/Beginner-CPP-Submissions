/*ALLOCATE MINIMUM NUMBER OF PAGES:
Given number of pages in "size" different books and k students. 
The books are arranged in ascending order of number of pages. 
Every student is assigned to read some consecutive books. 
The task is to assign books in such a way that the maximum number
of pages assigned to a student is minimum. */
#include<iostream>
#include<conio.h>
using namespace std;

bool isvalid(int a[],int mid,int size,int k)
{
	int student=1;
	int sum=0;
		
	for(int i=0;i<size;i++)
	{      
		if(sum+a[i]>mid) // addition of pages of this book is more than mid, then we increase students 
		{
			student++;
			sum=a[i]; //new student created
			
			if(student>k) //students cannot be more than given number of students 
				return false;
		}
		else
		 sum+=a[i];
		
	}
	return true;
}

int BinarySearch(int a[],int max,int sum,int size,int k)
{	
	int start=max; //max in array as the person has to have atleast one book
	int end=sum; //sum of array elements 
	int mid,res=-1;
	
	if(size<k) // number of books cannot be less than number of students
	return -1;
	
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		
		if(isvalid(a,mid,size,k)) //if isvalid  is true mid can be no of pages for the particular number of students
		{   
			res=mid; // we store the possible result
			end=mid-1; // search in left of array to minimize these pages 
		}
		else 
			start=mid+1;// move towards right as number of pages are less	
	}
	return res;
}
int main()
{
	int arr[20],k,sum=0,size;
	cout<<"Enter the size of the array"<<endl; //number of books 
	cin>>size;
	
	cout<<"Enter elements "<<endl; // pages in each book
	 for(int i=0;i<size;i++)
	 {	cin>>arr[i];
	 	sum+=arr[i]; // sum of total pages
	 }	
	 	
	cout<<"Enter the number of students"<<endl; //number of students to allocate books 
	cin>>k;
	
	int result=BinarySearch(arr,arr[size-1],sum,size,k); // function to find minimum no. of pages 
	
	cout<<"Minimum pages found are "<<result<<endl;
		
	getch();
	return 0;
}
