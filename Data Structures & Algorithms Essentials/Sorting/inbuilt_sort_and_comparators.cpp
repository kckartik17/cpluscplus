#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(){
	int arr[] = {4,1,5,3,2};
	int n = sizeof(arr)/sizeof(int);

	sort(arr, arr + n, compare);
	// sort(arr, arr + n, greater<int>());
	// reverse(arr,arr + n);

	for(auto x : arr){
		cout << x << " ";
	}
}