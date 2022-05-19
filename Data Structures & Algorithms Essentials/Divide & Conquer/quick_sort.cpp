#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int pivot, int lo, int hi){
	int i = lo;
	int j = lo;
	while(i <= hi){
		if(arr[i] > pivot){
			i++;
		}else{
			swap(arr[i++],arr[j++]);
		}
	}

	return j - 1;
}

void quickSort(vector<int>& arr, int lo, int hi){
	if(lo >= hi) return;

	int pivot = arr[hi];
	int parIdx = partition(arr,pivot,0,hi);
	quickSort(arr,0,parIdx - 1);
	quickSort(arr,parIdx + 1,hi);
}

int main(){
	vector<int> arr = {3,5,1,4,2,9,7,4};
	quickSort(arr,0,arr.size() - 1);
	for(auto &it : arr){
		cout << it << " ";
	}
	return 0;
}