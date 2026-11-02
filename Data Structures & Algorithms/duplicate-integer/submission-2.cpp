class Solution {
public:
bool hasDuplicate(vector<int>& nums){
    std::sort(nums.begin(), nums.end());
    if (nums.size() == 0){
        return false;
    }
    int i = 0, j = 1;
    while (i < nums.size() - 1){
        if (nums[i] == nums[j]){
            return true;
        }
        i++;
        j++;
    }
    return false;
}
};