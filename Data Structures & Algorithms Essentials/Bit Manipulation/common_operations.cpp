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

void clearLastIBits(int &num, int i){
	int mask = -1 << i;
	num = num & mask;
}

void clearNBitsInRange(int &num, int i, int j){
	int a = -1 << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	num = num & mask;
}

int main(){
	int num = 31;
	int i = 2;
	// cin >> ith;
	// cout << getIthBit(num,ith);
	// setIthBit(num,ith);
	// clearIthBit(num,ith);
	// updateIthBit(num,ith,1);
	// clearLastIBits(num,i);
	clearNBitsInRange(num,1,3);
	cout << num;
}