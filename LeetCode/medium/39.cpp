class Solution {
private:
    void findCombinations(int idx,vector<int> &arr, vector<int> &ds, vector<vector<int>> &result, int target){
        if(idx == arr.size()){
            if(target == 0){
                result.push_back(ds);
            }
            return;
        }
        
        if(arr[idx] <= target){
            ds.push_back(arr[idx]);
            findCombinations(idx,arr,ds,result,target - arr[idx]);
            ds.pop_back();
        }
        
        findCombinations(idx + 1,arr,ds,result,target);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;
        findCombinations(0,candidates,ds,result,target);
        return result;
    }
};