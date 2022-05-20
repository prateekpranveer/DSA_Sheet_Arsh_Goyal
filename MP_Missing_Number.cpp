class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        unordered_map <int,int> um;
        for (int i = 0; i<nums.size(); i++){
            um.insert({nums[i],i});
        }
        for (int j = 0; j<nums.size()+1; j++){
            if (um.find(j)==um.end()){
                return j;
            }
        }
        return -1;
    }
    
};
