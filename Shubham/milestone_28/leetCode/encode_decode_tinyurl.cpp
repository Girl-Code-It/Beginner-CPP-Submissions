class Solution {
public:

    map<string, string>mp;
    int num = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        num++;
        string addOn = to_string(num);
        string ans = "http://tinyurl.com/";
        ans += (string)addOn;
        mp[ans] = longUrl;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};
