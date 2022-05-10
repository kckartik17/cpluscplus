#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr,int idx, int n){
	if(idx == n - 1) return true;
	if(arr[idx] < arr[idx + 1] && isSorted(arr, idx + 1, n)){
		return true;
	}
	return false;
}

int main(){
	vector<int> arr = {1,2,3,4,7};
	cout << isSorted(arr,0,arr.size());
	return 0;
}