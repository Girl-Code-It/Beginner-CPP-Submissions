// https://codezen.codingninjas.com/practice/470/2295/longest-sequence

int LengthOfLongestSeq(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int next = arr[i];
            while (s.find(next) != s.end()) // updating until we get non consecutive no.
                next++;
            res = max(res, next - arr[i]); // updating length
        }
    }
    return res;
}
