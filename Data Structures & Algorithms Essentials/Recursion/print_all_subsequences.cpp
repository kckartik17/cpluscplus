#include<bits/stdc++.h>
using namespace std;

void print_all_subs(int idx, vector<int> &input, vector<int> &output, int n){
    if(idx >= n){
        for(auto &it: output){
            cout << it << " ";
        }
        if(output.empty()) cout << "{}";
        cout << "\n";
        return;
    }
    //take
    output.push_back(input[idx]);
    print_all_subs(idx + 1,input,output,n);
    //not take
    output.pop_back();
    print_all_subs(idx + 1,input,output,n);
}

int main(){
    vector<int> input{1,2,3};
    int n = input.size();
    vector<int> output;
    print_all_subs(0,input,output,n);
}