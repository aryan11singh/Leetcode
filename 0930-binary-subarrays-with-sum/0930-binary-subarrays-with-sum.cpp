class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         int ans = 0;
        int prefix = 0;
        // Map to store frequency of prefix sums. 
        // Initialize with 0:1 to handle subarrays starting from index 0.
        unordered_map<int, int> count{{0, 1}};

        for (const int num : nums) {
            prefix += num;
            // If (prefix - goal) exists in map, it means there are subarrays
            // ending at current index with sum equal to goal.
            if (const auto it = count.find(prefix - goal); it != count.cend())
                ans += it->second;
            
            // Increment the frequency of the current prefix sum
            ++count[prefix];
        }

        return ans;
        
    }
};