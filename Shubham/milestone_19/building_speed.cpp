#include<iostream>

using namespace std;
void merge(int* A, int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    //temp arrays
    int L[n1], R[n2];

    //copy data to temp arrays L[] and R[];
    for(int i=0; i<n1; i++)
        L[i] = A[l+i];
    for(int j=0; j<n2; j++)
        R[j] = A[mid+j+1];
    
    int i, j, k;
    i=j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    while(i<n1)
        A[k++] = L[i++];
    while(j<n2)
        A[k++] = R[j++];
}

void mergeSort(int* A, int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(A, l, mid);
        mergeSort(A, mid+1, r);

        merge(A, l, mid, r);
    }
   
}
int main()
{
	int N;
	cin >> N;
	N *= 2;
	int A[N];
	for(int i=0; i<N; i++)
		cin >> A[i];

	mergeSort(A, 0, N-1);
	int sum=0;
	for(int i=0; i<N; i+=2)
	{
		int min = (A[i] < A[i+1]) ? A[i] : A[i+1];
		sum += min;
	}
	cout << sum << endl;

}

//link : https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/maximum-sum-of-building-speed-00ab8996/description/
