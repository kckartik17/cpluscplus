class Solution {
private:
    void findSubsets(int idx, vector<int> &arr, vector<int> &ds, vector<vector<int>> &result){
        result.push_back(ds);
        for(int i = idx; i < arr.size(); i++){
            if(i > idx && arr[i] == arr[i-1]) continue;
            ds.push_back(arr[i]);
            findSubsets(i + 1, arr,ds,result);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findSubsets(0,nums,ds,result);
        return result;
    }
};