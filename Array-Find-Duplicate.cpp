class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> um;
        for (int i = 0; i<nums.size(); i++){
            if (um.find(nums[i])!=um.end()){
                return nums[i];
                break;
            }
            
            um.insert({nums[i],i});
        }
        
        return -1;
    }
    
};
