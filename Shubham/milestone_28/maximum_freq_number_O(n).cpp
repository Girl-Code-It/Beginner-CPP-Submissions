int maxFrequencyNumber(vector<int> arr, int n)
{
    unordered_map<int, int> hash;
    
    for(int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    int max_freq = 1, res = arr[0];
    int i = 0;
    while(i < arr.size())
    {
        if(hash[arr[i]] > max_freq)
        {    
            max_freq = hash[arr[i]];
            res = arr[i];
        }
        i++;
    }
    return res;
}
