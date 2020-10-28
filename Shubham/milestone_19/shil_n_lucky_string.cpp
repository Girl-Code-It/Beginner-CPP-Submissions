#include<iostream>
#include<string>
#include<vector>


using namespace std;



void bubbleSort(char* A, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                char temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;
    char S[N];

    for(int i=0; i<N; i++)
        cin >> S[i];
    
    char half1[(N/2)+1], half2[(N/2)+1];
    int i, j;
    for(i=0; i<N/2; i++)
        half1[i] = S[i];
    half1[i] = '\0';
    for(i=N/2, j=0; i<N; i++, j++)
        half2[j] = S[i];
    half2[j] = '\0';


    //sorting both strings

    bubbleSort(half1, N/2);
    bubbleSort(half2, N/2);

    int case1_count, case2_count, case3_count;
    case1_count=case2_count = case3_count =0;
    //case 1 check
    //1. in each pair first half is greater than second

    for(int i=0; i<N/2; i++)
        if(half1[i] <= half2[i])
            case1_count++;

    //case2 check

    for(int i=0; i<N/2; i++)
        if(half1[i] >= half2[i])
            case2_count++;

    //case3 check

    for(int i=0; i<N/2; i++)
        if(half1[i] != half2[i])
            case3_count++;

    
    //find the case with minimum changes



    int min = (case1_count < case2_count) ? case1_count : case2_count;
    min = (min < case3_count) ? min : case3_count;

    cout << min << endl;



    
}

    

