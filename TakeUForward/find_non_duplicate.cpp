#include<bits/stdc++.h>
using namespace std;

pair<int,int> findNonDuplicates(vector<int>& arr){
	int XOR = 0;
	for(auto &it : arr) XOR = XOR ^ it;
	int cnt = 0;
	while(XOR){
		if(XOR & 1) break;
		cnt++;
		XOR = XOR >> 1;
	}
	int XOR1 = 0, XOR2 = 0;
	for(auto &it : arr){
		if(it & (1 << cnt)) XOR1 = XOR1 ^ it;
		else XOR2 = XOR2 ^ it;
	}

	return make_pair(XOR1,XOR2);
}

int main(){
	vector<int> arr = {2,1,2,5,1,4,4,7,3,3};
	pair<int,int> p = findNonDuplicates(arr);
	cout << p.first << " " << p.second << endl;
	return 0;
}