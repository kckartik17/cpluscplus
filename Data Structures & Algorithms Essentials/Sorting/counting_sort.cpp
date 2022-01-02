#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {100,4,1,5,2,3,1};
	int n = sizeof(arr)/sizeof(int);

	int largest = INT_MIN;
	for(auto x : arr){
		largest = max(largest,x);
	}

	vector<int> freq(largest + 1,0);
	for(auto x : arr){
		freq[x]++;
	}

	int j = 0;

	for(int i = 0; i <= largest; i++){
		while(freq[i] > 0){
			arr[j] = i;
			freq[i]--;
			j++;
		}
	}

	for(auto x : arr){
		cout << x << " ";
	}
}