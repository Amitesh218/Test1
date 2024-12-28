class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>themap;
        vector<int> result;
        int i;
        for (i=0; i<nums.size();i++){
            if(themap.find(target-nums[i])!=themap.end()){
                result.push_back(themap[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            else
            themap[nums[i]]=i; //redundant? js a random placeholder action i think
        }
        
    }
};
