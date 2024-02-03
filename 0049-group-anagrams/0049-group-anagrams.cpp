class Solution
{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs)
        {
            unordered_map<string, vector < string>> freq;

            for (const auto &s: strs)
            {
                string sortedStr = s;
                sort(sortedStr.begin(), sortedStr.end());
                freq[sortedStr].push_back(s);
            }

            vector<vector < string>> result;
            for (const auto &pair: freq)
            {
                result.push_back(pair.second);
            }

            return result;
        }
};