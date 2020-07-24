class Solution
{
public:
    vector<string> subdomainVisits(vector<string>& cpdomains)
    {
        unordered_map<string,int>m;

        for(auto s : cpdomains)
        {
            int i = s.find(" ");
            int n = stoi(s.substr(0,i));
            string str = s.substr(i+1);

            for(int j = 0; str[j] ; j++)
            {
                if(str[j] == '.')
                    m[str.substr(j+1)] += n;
            }
            m[str] += n;
        }

        vector<string>res;

        for(auto itr : m)
            res.push_back(to_string(itr.second) + ' ' + itr.first);

        return res;
    }
};