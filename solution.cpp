class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>checkmap;
        for(int i=0; i<nums.size(); i++) {
            if(checkmap.count(nums[i])) {
                checkmap[nums[i]]++;
                return true;
            }
            else {
                checkmap[nums[i]] = 1;
            }
        }
        return false;
    }
};
