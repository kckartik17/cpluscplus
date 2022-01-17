#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 16;
    // cin >> n;
    if ((n & (n - 1)) == 0){
        cout << "Power of 2";
    }
    else{
        cout << "Not a power of 2";
    }
}