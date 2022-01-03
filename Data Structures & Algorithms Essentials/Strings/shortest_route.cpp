#include <bits/stdc++.h>
using namespace std;

int main(){
	char route[1000];
	cin.getline(route,1000);

	int x = 0;
	int y = 0;

	for(int i = 0; route[i] != '\0';i++){
		switch(route[i]){
			case 'N': y++;
					  break;
			case 'S': y--;
					  break;
			case 'W': x--;
					  break;
			case 'E': x++;
					  break;
		}
	}

	if(y > 0){
		while(y--){
			cout << "N";
		}
		y = 0;
	}

	if(x > 0){
		while(x--){
			cout << "E";
		}
		x = 0;
	}

	if(y < 0){
		while(y++){
			cout << "S";
		}
		y = 0;
	}

	if(x < 0){
		while(x++){
			cout << "W";
		}
		x = 0;
	}

}