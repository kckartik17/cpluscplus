#include<bits/stdc++.h>
#include "Vector.h"
using namespace std;

int main(){
	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	cout << "Size: " << v.size() << "\n";
	cout << "Capacity: " << v.capacity() << "\n";
}