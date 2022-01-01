#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {-90,20,90,10,-40};
	int n = sizeof(arr)/sizeof(int);

	int prefix[n] = {0};
	prefix[0] = arr[0];
	for(int i = 1; i < n; i++){
		prefix[i] = prefix[i - 1] + arr[i];
	}

	int largest_sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			int subarraysum =  i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
			largest_sum = max(largest_sum,subarraysum);
		}
	}

	cout << largest_sum;
}