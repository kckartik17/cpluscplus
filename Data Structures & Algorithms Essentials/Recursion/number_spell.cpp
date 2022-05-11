#include<bits/stdc++.h>
using namespace std;

void number_spell(int num, vector<string> &words){
	if(num == 0) return;
	number_spell(num/10,words);
	cout << words[num%10] << " ";
}

int main(){
	vector<string> words = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	number_spell(1997,words);
	return 0;
}