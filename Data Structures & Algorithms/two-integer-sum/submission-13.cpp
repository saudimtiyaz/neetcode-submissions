class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> output_map;

        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];

            if (output_map.find(difference) != output_map.end()) {
                return {output_map[difference], i};
            }
            output_map[nums[i]] = i;
        }

        return {};
    }
};
