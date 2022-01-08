#include<bits/stdc++.h>
using namespace std;

int getIthBit(int num, int ith){
	int mask = 1 << ith;
	return (mask & num) > 0 ? 1 : 0;
}

void setIthBit(int &num, int ith){
	int mask = 1 << ith;
	num = num | mask;
}

void clearIthBit(int &num, int ith){
	int mask = ~(1 << ith);
	num = num & mask;
}

void updateIthBit(int &num, int ith, int val){
	clearIthBit(num,ith);
	int mask = val << ith;
	num = num | mask;
}

int main(){
	int num = 13;
	int ith;
	cin >> ith;
	// cout << getIthBit(num,ith);
	// setIthBit(num,ith);
	// clearIthBit(num,ith);
	updateIthBit(num,ith,1);
	cout << num;
}