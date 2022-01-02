#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {4,1,3,5,2};
	int n = sizeof(arr)/sizeof(int);

	for(int pos = 0; pos < n - 1; pos++){
		int current = arr[pos];
		int min_position = pos;
		for(int j = pos; j < n; j++){
			if(arr[j] < arr[min_position]){
				min_position = j;
			}
		}
		swap(arr[pos],arr[min_position]);
	}

	for(auto x : arr){
		cout << x << " ";
	}
}