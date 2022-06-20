#include<bits/stdc++.h>
using namespace std;

int main(){
	int c;
	cin >> c;
	int res = 0;
	while(c--){
		int sum = 0;
		int p = 3;
		while(p--){
			int q;
			cin >> q;
			sum += q;
		}

		if(sum > 1) res += 1;
	}

	cout << res;
	return 0;
}