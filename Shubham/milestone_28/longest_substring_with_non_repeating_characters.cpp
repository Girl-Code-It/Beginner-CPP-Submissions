int longestUniqueSubsttr(string S){
    
    int i = -1;
    int j = -1;
    int ans = 0;
    
    unordered_map<char, int> m;
    
    while(true)
    {
        bool f1 = false;
        bool f2 = false;
        int len = S.length();
        
        while(i < len-1)
        {
            f1 = true;
            i++;
            m[S[i]]++;
            
            if(m[S[i]] == 2)
                break;
            else
                ans = max(ans, i - j);
        }
        
        while(j < i)
        {
            f2 = true;
            j++;
            m[S[j]]--;
            
            if(m[S[i]] == 1)
                break;
        }
        if(!f1 and ! f2)
            break;
    }
    return ans;
    
}
