#include<bits/stdc++.h>
using namespace std;

int print_one_subs_whose_sum_is_k(int idx, vector<int> &input, int current_sum, int target_sum, int n){
    if(idx >= n){
        if(current_sum == target_sum) return 1;
        return 0;
    }
    
    //take
    current_sum += input[idx];
    int take = print_one_subs_whose_sum_is_k(idx + 1,input,current_sum,target_sum,n);
    //not take
    current_sum -= input[idx];
    int nottake = print_one_subs_whose_sum_is_k(idx + 1,input,current_sum,target_sum,n);
    return take + nottake;
}

int main(){
    vector<int> input{1,2,1};
    int n = input.size();
    int sum = 2;
    cout << print_one_subs_whose_sum_is_k(0,input,0,sum,n);
}