#include<bits/stdc++.h>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> &arr1, vector<int> &arr2){
	int m = arr1.size();
	int n = arr2.size();
	vector<int> sorted(m + n,0);
	int i = 0, j = 0, k = 0;
	while(i < m && j < n){
		if(arr1[i] < arr2[j]){
			sorted[k] = arr1[i];
			i++;
			k++;
		}else{
			sorted[k] = arr2[j];
			j++;
			k++;
		}
	}

	while(i < m){
		sorted[k] = arr1[i];
		i++;
		k++;
	}

	while(j < n){
		sorted[k] = arr2[j];
		j++;
		k++;
	}

	return sorted;
}

vector<int> mergeSort(vector<int> &arr, int startIdx, int endIdx){
	if(startIdx == endIdx){
		vector<int> arrOfSizeOne(1,0);
		arrOfSizeOne[0] = arr[startIdx];
		return arrOfSizeOne;
	}
	int mid = startIdx + ((endIdx - startIdx) / 2);
	vector<int> firstSortedHalf = mergeSort(arr,startIdx,mid);
	vector<int> secondSortedHalf = mergeSort(arr,mid + 1,endIdx);
	vector<int> merged = mergeTwoSortedArray(firstSortedHalf,secondSortedHalf);
	return merged;
}

int main(){
	vector<int> arr = {2,4,7,9,1,3,6,5};
	vector<int> sorted = mergeSort(arr,0,arr.size() - 1);
	for(auto &it : sorted){
		cout << it << " ";
	}
	return 0;
}