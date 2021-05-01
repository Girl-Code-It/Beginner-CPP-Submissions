char firstNonRepeatingCharacter(string str)
{
    // Write your code here
	unordered_map<char, int> m; // char : freq;
    
    for(int i = 0 ; i < str.length(); i++)
        m[str[i]]++;
    
    for(int i = 0; i < str.length(); i++)
    {
        if(m[str[i]] == 1)
            return str[i];
    }
    return str[0];
}
