#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string N;
	cin >> N;

	int num[10] = { 0 };
	int len_N = N.length();
	for (int i = 0; i < len_N; i++){
		num[N[i] - '0']++;
	}

	for (int i = 0; i < 10; i++){
		if (num[i] != 0)
			printf("%d:%d\n", i, num[i]);
	}
	return 0;
}
