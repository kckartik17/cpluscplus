#include<bits/stdc++.h>
using namespace std;

void decreasing(int n){
	if(n == 0) return;

	cout << n << " ";
	decreasing(n - 1);
}

void increasing(int n){
	if(n == 0) return;

	increasing(n - 1);
	cout << n << " ";
}

int main(){
	decreasing(5);
	return 0;
}