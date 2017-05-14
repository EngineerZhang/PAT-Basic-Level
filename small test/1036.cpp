#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N;
	char ch;
	scanf("%d %c", &N, &ch);

	int row = round((double)N / 2);
	for (int i = 1; i <= row; i++){
		if (i == 1 || i == row){
			for (int j = 0; j < N; j++){
				if (j != N - 1)
					printf("%c", ch);
				else
					printf("%c\n", ch);
			}
		}
		else{
			for (int j = 0; j < N; j++){
				if (j == 0 || j == N - 1)
					printf("%c", ch);
				else
					printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}
