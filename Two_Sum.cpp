class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map <int, int> um;
        for (int i = 0; i<nums.size(); ++i){
            um.insert({(target-nums[i]),i});
        }
        
        for (int j = 0; j<nums.size(); j++){
            if (um.find(nums[j])!=um.end() && j!=um.find(nums[j])->second){
                ans.push_back(j);
                ans.push_back(um.find(nums[j])->second);
                break;
            }
        } 
        return ans;
    }
};