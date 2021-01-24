#include <bits/stdc++.h>
using namespace std;

void getRes()
{
    int n;
    cin >> n;
    int arr[n], brr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        brr[i] = sum;
    }
    int q;
    cin >> q;
    int qry[q];
    for (int i = 0; i < q; i++)
        cin >> qry[i];

    for (int i = 0; i < q; i++)
    {
        if (qry[i] > sum)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (qry[i] <= brr[j])
                {
                    cout << (j + 1) << endl;
                    break;
                }
            }
        }
    }
}
int main()
{

    int testCases = 1;
    // cin>>testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}

//* Optimized solution

// #include <bits/stdc++.h>
// using namespace std;

// int bSearch(int brr[], int x, int l, int r)
// {
//     int res = 0;
//     while(r-l >= 0)
//     {
//         int mid = l + (r-l)/2;

//         if(brr[mid] >= x)
//         {
//             res = mid;
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return (res+1);
// }
// void getRes()
// {
//     int n;
//     cin >> n;
//     int arr[n], brr[n], sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//         brr[i] = sum;
//     }
//     int q;
//     cin >> q;
//     int qry[q];
//     for (int i = 0; i < q; i++)
//         cin >> qry[i];

//     for (int i = 0; i < q; i++)
//     {
//         if (qry[i] > sum)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//           cout<<bSearch(brr, qry[i],0,n-1)<<endl;
//         }
//     }
// }
// int main()
// {

//     int testCases = 1;
//     // cin>>testCases;

//     while (testCases-- > 0)
//     {
//         getRes();
//     }
//     return 0;
// }
