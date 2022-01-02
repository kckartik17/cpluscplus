#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {4,1,3,5,2};
	int n = sizeof(arr)/sizeof(int);

	for(int i = 1; i < n; i++){
		int current = arr[i];
		int prev = i - 1;
		while(prev >= 0 and arr[prev] > current){
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev + 1] = current;
	}

	for(auto x : arr){
		cout << x << " ";
	}
}