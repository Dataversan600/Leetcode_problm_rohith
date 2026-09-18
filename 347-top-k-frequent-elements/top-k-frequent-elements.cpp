class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }

        vector<pair<int, int>> freq_vec;
        for (auto it : mp) {
            freq_vec.push_back({it.first, it.second});
        }

        // FIX 1: Add a lambda function to sort by frequency (second element) in
        // descending order
        sort(freq_vec.begin(), freq_vec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        // FIX 2 & 3: Change loop boundaries to correctly track 0-indexed
        // vectors
        for (int i = 0; i < k; i++) {
            ans.push_back(freq_vec[i].first);
        }

        return ans;
    }
};