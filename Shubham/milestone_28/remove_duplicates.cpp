vector<int> removeDuplicates(vector<int> A, int n)
{
    // Write your code here
    unordered_map<int, int> m; // num : freq
    
    for(auto it = A.begin(); it != A.end(); it++)
    {
    	if(m.find(*it) != m.end())
        	A.erase(it), it--;
        else
            m[(*it)]++;
    }    
    return A;
}

