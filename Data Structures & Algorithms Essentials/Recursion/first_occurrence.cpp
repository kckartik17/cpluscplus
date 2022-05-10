#include<bits/stdc++.h>
using namespace std;

int firstOcc(int idx, vector<int> &arr, int key, int n){
	if(idx == n - 1) return -1;
	if(arr[idx] == key) return idx;
	int subIdx = firstOcc(idx + 1, arr, key, n);
	if(subIdx != -1) return subIdx;
	return -1;
}

int main(){
	vector<int> arr = {7,5,1,4,5,2};
	cout << firstOcc(0,arr,4,arr.size());
	return 0;
}