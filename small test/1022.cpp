#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int stack[100] = { 0 };

int main(){
	int A, B, D;
	scanf("%d %d %d", &A, &B, &D);

	long C = A + B;
	

	if (C == 0)	printf("0");
	else{
		int top = 0;
		while (C != 0){
			stack[top++] = C % D;
			C /= D;
		}

		for (int i = top - 1; i >= 0; i--)
			printf("%d", stack[i]);
	}

	return 0;
}
