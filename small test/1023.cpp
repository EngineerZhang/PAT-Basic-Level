#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int num[10] = { 0 };

int main(){
	for (int i = 0; i < 10; i++){
		scanf("%d", &num[i]);
	}

	for (int i = 1; i <= 9; i++){
		if (num[i]>0){
			printf("%d", i);
			num[i]--;
			break;
		}
	}

	for (int i = 0; i < 10; i++){
		while (num[i]>0){
			printf("%d", i);
			num[i]--;
		}
	}
	return 0;
}
