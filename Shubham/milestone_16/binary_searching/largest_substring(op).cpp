#include<iostream>
#include<string>

using namespace std;

int countZero(string,int, int);
int countOnes(string, int, int);

int main()
{
        int N;
        scanf("%d", &N);
        string s;
        cin >> s;
        int len =0;

        for(int i=0; i<N; i++)
        {
                for(int j=i+1; j<N; j++)
                {
                        int zeros = countZero(s, i, j+1);
                        int ones = countOnes(s, i, j+1);

                        if(zeros > ones)
                        {
                                if(j+1-i > len)
                                        len = j+1-i;
                        }
                }
        }
        printf("%d\n", len);

}

inline int countZero(string s, int start, int size)
{
        int count=0;
        for(int i=start; i<size; i++)
        {
                if(s[i] == '0') count++;
        }
        return count;
}

inline int countOnes(string s, int start, int size)
{
        int count=0;
        for(int i=start; i<size; i++)
        {
                if(s[i] == '1') count++;
        }
        return count;
}
