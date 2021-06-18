//https://codezen.codingninjas.com/practice/470/749/longest-substring-without-repeat

#include<unordered_map>

int longestSubstr(string S) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    unordered_map<char ,int> m;
    int i=-1,j=-1,mlen=0;
    
    while(true){
        bool flag1 = false;
        bool flag2 = false;
        
        int n = S.length()-1;
    while(i< n){
        flag1 = true;
        
        i++;
        char ch = S[i];
        m[ch]++;
        if(m[ch] == 2){
            break;
        }
        else{
            int len = i - j;
            if(len>mlen){
                mlen = len;
            }
        }
    }
        while(j<i){
            flag2 = true;
            j++;
            char ch = S[j];
            m[ch]--;
            if(m[ch]==1){
                break;
            }
            
        }
        if(flag1 == false && flag2 == false){
            break;
        }
    }
    return mlen;
}
