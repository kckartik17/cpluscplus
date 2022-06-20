#include<bits/stdc++.h>
using namespace std;

int main(){
	int weight;
	cin >> weight;
	if(weight > 2 && (weight & 1) == 0) cout << "YES";
	else cout << "NO";
	return 0;
}