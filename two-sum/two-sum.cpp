class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        unordered_map<int,int> indices;
        for(int i = 0; i <nums.size();i++){
            if(indices.find(target-nums[i]) !=indices.end()){
                results.push_back(indices[target-nums[i]]);
                results.push_back(i);
                return(results);
            }
            indices[nums[i]]=i;
        } 
        return{};
    }
};