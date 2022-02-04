#include<bits/stdc++.h>
using namespace std;

bool print_one_subs_whose_sum_is_k(int idx, vector<int> &input, vector<int> &output,int current_sum, int target_sum, int n){
    if(idx == n){
        if(current_sum == target_sum){
            for(auto &it: output){
                cout << it << " ";
            }
            cout << "\n";
            return true;
        }
        return false;
    }
    //take
    output.push_back(input[idx]);
    current_sum += input[idx];
    if(print_one_subs_whose_sum_is_k(idx + 1,input,output,current_sum,target_sum,n)) return true;
    //not take
    current_sum -= input[idx];
    output.pop_back();
    if(print_one_subs_whose_sum_is_k(idx + 1,input,output,current_sum,target_sum,n)) return true;
    return false;
}

int main(){
    vector<int> input{1,2,1};
    int n = input.size();
    int sum = 2;
    vector<int> output;
    print_one_subs_whose_sum_is_k(0,input,output,0,sum,n);
}