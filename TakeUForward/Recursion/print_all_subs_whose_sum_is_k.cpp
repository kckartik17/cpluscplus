#include<bits/stdc++.h>
using namespace std;

void print_all_subs_whose_sum_is_k(int idx, vector<int> &input, vector<int> &output,int current_sum, int target_sum, int n){
    if(idx == n){
        if(current_sum == target_sum){
            for(auto &it: output){
                cout << it << " ";
            }
            cout << "\n";
        }
        return;
    }
    //take
    output.push_back(input[idx]);
    current_sum += input[idx];
    print_all_subs_whose_sum_is_k(idx + 1,input,output,current_sum,target_sum,n);
    //not take
    current_sum -= input[idx];
    output.pop_back();
    print_all_subs_whose_sum_is_k(idx + 1,input,output,current_sum,target_sum,n);
}

int main(){
    vector<int> input{1,2,1};
    int n = input.size();
    int sum = 2;
    vector<int> output;
    print_all_subs_whose_sum_is_k(0,input,output,0,sum,n);
}