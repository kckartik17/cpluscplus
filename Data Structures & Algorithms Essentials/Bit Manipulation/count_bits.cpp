#include <bits/stdc++.h>
using namespace std;

int count_bits(int &num){
    int cnt = 0;
    while(num > 0){
        cnt += num & 1;
        num = num >> 1;
    }

    return cnt;
}

int count_bits_hack(int &num){
    int cnt = 0;
    while(num > 0){
        num = num & (num - 1);
        cnt++;
    }
    return cnt;
}

int main(){
    int num = 15;
    cout << count_bits_hack(num);
}