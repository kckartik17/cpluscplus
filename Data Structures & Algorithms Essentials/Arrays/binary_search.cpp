#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int n, int key){
	int start = 0;
	int end = n - 1;
	while(start <= end){
		int mid = (start + end) / 2;
		if(arr[mid] == key){
			return mid;
		}else if(arr[mid] > key){
			end = mid - 1;
		}else{
			start = mid + 1;
		}
	}

	return -1;
}

int main(){
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;
	int idx = binary_search(arr,n,key);
	if(idx != -1){
		cout << key << " is present at index " << idx;
	}else{
		cout << key << " is NOT found!";
	}
}