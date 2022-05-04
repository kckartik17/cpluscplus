#include<bits/stdc++.h>
using namespace std;

int main(){
	// Take Input
	int n,m;
	cin >> n >> m;
	int arr[n][m] = {0};
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < m; j++){
			cin >> arr[i][j];
		}
	}

	//Code
	int minr = 0, minc = 0, maxr = n - 1, maxc = m - 1;
	int total = n * m;
	int count = 0;
	while(count < total){
		//top wall
		for(int i = minr, j = minc; j <= maxc && count < total; j++){
			cout << arr[i][j] << " ";
			count++;
		}
		minr++;

		//right wall
		for(int i = minr, j = maxc; i <= maxr && count < total; i++){
			cout << arr[i][j] << " ";
			count++;
		}
		maxc--;

		//bottom wall
		for(int i = maxr, j = maxc; j >= minc && count < total; j--){
			cout << arr[i][j] << " ";
			count++;
		}
		maxr--;

		//left wall
		for(int i = maxr, j = minc; i >= minr && count < total; i--){
			cout << arr[i][j] << " ";
			count++;
		}
		minc++;
	}
	return 0;
}