class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map <int,int> m;
        for (int i = 0; i<nums.size(); i++){
            if (m.find(nums[i])!=m.end()){
                m.find(nums[i])->second++;
            }
            m.insert({nums[i],1}); 
        }
        vector <int> ans;
        for (auto x:m){
            if (x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
