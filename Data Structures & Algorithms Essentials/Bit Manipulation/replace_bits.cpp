#include <bits/stdc++.h>
using namespace std;

void clearNBitsInRange(int &num, int i, int j){
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
}

void replaceBits(int &num, int i, int j, int mask){
    clearNBitsInRange(num, i, j);
    mask = mask << i;
    num = num | mask;
}

int main(){
    int num = 15;
    int mask = 2;
    int i = 1;
    int j = 3;
    replaceBits(num, i, j, mask);
    cout << num;
}