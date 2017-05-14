#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N;
	char ch;
	scanf("%d %c", &N, &ch);

	int row = sqrt((N + 1) / 2);
	int blank = 0;
	for (int i = row; i >= 1; i--){
		for (int j = 0; j < blank; j++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("%c", ch);
		printf("\n");
		blank++;
	}

	blank = blank - 2;
	for (int i = 2; i <= row; i++){
		for (int j = 0; j < blank; j++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("%c", ch);
		printf("\n");
		blank--;
	}

	printf("%d", N - 2 * row*row + 1);
	return 0;
}
