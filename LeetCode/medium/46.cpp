class Solution {
private:
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &result, int freq[]){
        if(ds.size() == nums.size()){
            result.push_back(ds);
            return;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurPermute(ds,nums,result,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        int freq[nums.size()];
        for(int i = 0; i < nums.size(); i++) freq[i] = 0;
        recurPermute(ds,nums,result,freq);
        return result;
    }
};