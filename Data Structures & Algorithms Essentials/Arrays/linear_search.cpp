#include <bits/stdc++.h>
using namespace std;

int linear_search(int *arr, int n, int key){
	for(int i = 0 ; i < n; i++){
		if(arr[i] == key){
			return i;
		}
	}

	return -1;
}

int main(){
	int arr[] = {4,1,2,3,5};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;
	int idx = linear_search(arr,n,key);
	if(idx != -1){
		cout << key << " is present at index " << idx;
	}else{
		cout << key << " is not found!";
	}
}