#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int school[100010] = { 0 };

int main(){
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		int tag, score;
		scanf("%d%d", &tag, &score);
		school[tag] += score;
	}

	int max_tag = 0;
	for (int i = 1; i <= 100000; i++){
		if (school[i] > school[max_tag])
			max_tag = i;
	}

	printf("%d %d", max_tag, school[max_tag]);
	return 0;
}
