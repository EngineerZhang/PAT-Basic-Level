#include<stdio.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int num[100010] = { 0 };

int main1038(){
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		int score;
		scanf("%d", &score);
		num[score]++;
	}

	int K;
	scanf("%d", &K);
	for (int i = 1; i <= K; i++){
		int score;
		scanf("%d", &score);
		printf("%d", num[score]);
		if (i != K)
			printf(" ");
	}
	return 0;
}
