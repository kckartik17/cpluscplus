#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {-90,20,90,10,-40};
	int n = sizeof(arr)/sizeof(int);

	int current_sum = 0;
	int largest_sum = 0;
	for(int i = 0; i < n; i++){
		current_sum += arr[i];
		if(current_sum < 0) current_sum = 0;
		largest_sum = max(largest_sum,current_sum);
	}

	cout << largest_sum;
}