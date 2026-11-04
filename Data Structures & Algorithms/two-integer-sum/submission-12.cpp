class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;

        for (int k = 0; k < nums.size(); k++) {
            arr.push_back({nums[k], k});
        }

        sort(arr.begin(), arr.end());

        int i = 0, j = arr.size() - 1;

        while (i < j) {
            if (arr[i].first + arr[j].first == target) {
                return {min(arr[i].second, arr[j].second),
                        max(arr[i].second, arr[j].second)
                };
            }
            else if (arr[i].first + arr[j].first < target) {
                i++;
            }
            else {
                j--;
            }
        }

        return {};
    }
};
