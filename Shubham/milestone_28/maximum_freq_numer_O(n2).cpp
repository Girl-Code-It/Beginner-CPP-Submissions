int maxFrequencyNumber(vector<int> arr, int n)
{
    // Write your code here
    int curr_freq=1, curr_res=arr[0], max_freq=0, final_res;
    for(int i = 0; i < arr.size()-1; i++)
    {
        curr_freq = 1, curr_res = arr[i];
        for(int j = i+1; j < arr.size(); j++)
        {
            if(arr[i] == arr[j])
                curr_freq++;
        }
        if(curr_freq > max_freq)
            max_freq = curr_freq, final_res = curr_res;
    }
    return final_res;  
}
