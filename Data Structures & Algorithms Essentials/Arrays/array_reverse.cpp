#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n){
	int start = 0;
	int end = n - 1;
	while(start < end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	reverseArray(arr,n);
	for(int i : arr){
		cout << i << " ";
	}
}