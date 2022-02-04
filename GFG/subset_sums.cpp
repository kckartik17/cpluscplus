class Solution{
private:
    void subsetSumsHelper(int idx, int sum, vector<int> &arr, vector<int> &result,int N){
        if(idx >= N){
            result.push_back(sum);
            return;
        }
        subsetSumsHelper(idx + 1,sum + arr[idx],arr,result,N);
        subsetSumsHelper(idx + 1,sum,arr,result,N);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> result;
        subsetSumsHelper(0,0,arr,result,N);
        sort(result.begin(),result.end());
        return result;
    }
};