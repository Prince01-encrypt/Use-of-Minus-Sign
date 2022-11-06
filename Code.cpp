class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int length = nums.size();
        int index;
        for(int i = 0; i < length; i++) {
            index = abs(nums[i]);
            nums[index - 1] = abs(nums[index - 1]) * -1;
        }
        vector<int> ans;
        
        for(int i = 0; i < length; i++) {
            if(nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};
