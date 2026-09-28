class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Store {frequency, number}
        vector<pair<int, int>> arr;

        for (auto x : freq) {
            arr.push_back({x.second, x.first});
        }

        // Sort by frequency
        sort(arr.rbegin(), arr.rend());

        vector<int> ans;

        // Take top k
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};