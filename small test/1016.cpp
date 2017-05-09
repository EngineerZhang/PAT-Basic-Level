#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	long A, B;
	int DA, DB;
	scanf("%ld%d%ld%d", &A, &DA, &B, &DB);

	long PA = 0;
	long PB = 0;
	while (A > 0){
		if (A % 10 == DA){
			PA = 10 * PA + DA;
		}
		A /= 10;
	}

	while (B > 0){
		if (B % 10 == DB){
			PB = 10 * PB + DB;
		}
		B /= 10;
	}

	printf("%ld", PA + PB);
	return 0;
}
