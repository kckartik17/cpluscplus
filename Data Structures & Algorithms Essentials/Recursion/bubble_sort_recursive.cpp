#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr, int n){
	if(n == 1) return;

	for(int j = 0; j < n - 1; j++){
		if(arr[j] > arr[j + 1]) swap(arr[j],arr[j + 1]);
	}

	bubble_sort(arr,n - 1);
}

int main(){
	vector<int> arr = {4,1,6,5,2};
	bubble_sort(arr,arr.size());
	for(auto &it : arr){
		cout << it << " ";
	}
	return 0;
}