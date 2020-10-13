bool CheckSumPairs(int arr[], int n, int k, int m)
{
    if (n % 2)
        return false; // odd size array cant be divided into pairs.

    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
        int rem = arr[i] % k;       // finding rem with every array element.
        if (v.find(rem) == v.end()) // if that rem is not present in map
            v[rem] = 0;
        v[rem]++; // otherwise increase freq of that rem
    }

    for (auto x : v)
    {
        int rem = x.first;

        if (2 * rem == m)
        { // if rem multiplied by 2 is m that means there
            if (v[rem] % 2)
            { // should be even occ of rem to make pair with itself
                return false;
            }
        }
        else
        { // else no of occ of remainder should be equal to no of occ of m - rem .
            if (v[(m - rem + k) % k] != v[rem])
            {
                return false;
            }
        }
    }
    return true;
}
