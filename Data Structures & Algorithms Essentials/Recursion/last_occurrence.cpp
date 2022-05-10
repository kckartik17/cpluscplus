#include<bits/stdc++.h>
using namespace std;

int lastOccApproachOne(int idx, vector<int> &arr, int key){
	if(idx < 0) return -1;
	if(arr[idx] == key) return idx;
	int subIdx = lastOccApproachOne(idx - 1, arr, key);
	if(subIdx != -1) return subIdx;
	return -1;
}

int lastOccApproachTwo(int idx, vector<int> &arr, int key, int n){
	if(idx == n) return -1;
	int subIdx = lastOccApproachTwo(idx + 1, arr, key, n);
	if(subIdx == -1){
		if(arr[idx] == key) return idx;
	}else {
		return subIdx;
	}
	return -1;
}

int main(){
	vector<int> arr = {7,5,1,4,5,2};
	cout << lastOccApproachTwo(0,arr,5,arr.size());
	return 0;
}