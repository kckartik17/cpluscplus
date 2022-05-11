#include<bits/stdc++.h>
using namespace std;

// Time: O(N) Space: O(N)
long long powerBrute(int a, int n){
	if(n == 0) return 1;

	return a * powerBrute(a,n - 1);
}

// Time: O(logN) Space: O(N)
long long powerOptimised(int a, int n){
	if(n == 0) return 1;

	long long subPower = powerOptimised(a,n/2);
	subPower *= subPower;
	if(n&1) return a*subPower;
	return subPower;
}

int main(){
	cout << powerOptimised(2,10);
	return 0;
}