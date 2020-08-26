#include<iostream>
#include<string>
#define MAX 100

using namespace std;

bool check(string, string);

int main()
{
	string A;
	string B;

	cin >> A;
	cin >> B;

	if(check(A, B))	cout << "YES";
	else	cout << "NO";
}

bool check(string A, string B)
{
	//both string should be equal in length in order to be equal
	int len1 = A.length(), len2 = B.length();

	if(len1 != len2)
		return false;
	
	//all ASCII value of first string should be less than or equal second one
	//so that we can increase the ASCII value of first one and they become equal

	for(int i=0; i<len1; i++)
	{
		if(A[i] > B[i])
			return false;
	}

	//we make an array and store differences of ASCII values
	int d[len1];
	for(int i=0; i<len1; i++)
	{
		d[i] = B[i] - A[i];
	}

	//array should be in decending order 
	//like it can't be [1, 1, 0, 1]
	//in this case it is not possible to make string equal

	for(int i=0; i<len1 - 1; i++)
	{
		if(d[i] < d[i+1])
			return false;
	}

	return true;
}
