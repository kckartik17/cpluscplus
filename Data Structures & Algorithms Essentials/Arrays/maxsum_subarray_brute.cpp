#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {-90,20,90,10,-40};
	int n = sizeof(arr)/sizeof(int);

	int largest_sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			int subarraysum = 0;
			for(int k = i; k <= j; k++){
				subarraysum += arr[k];
			}
			largest_sum = max(largest_sum,subarraysum);
		}
	}

	cout << largest_sum;
}