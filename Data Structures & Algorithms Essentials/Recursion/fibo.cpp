#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
	if(n == 0 or n == 1) return n;

	int fibnm1 = fibo(n - 1);
	int fibnm2 = fibo(n - 2);

	return fibnm1 + fibnm2;
}

int main(){
	int n;
	cin >> n;
	cout << fibo(n);
}