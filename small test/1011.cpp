#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	int T;
	scanf("%d", &T);
	
	int index = 1;
	while (T--){
		long A, B, C;
		scanf("%ld%ld%ld", &A, &B, &C);

		if (A + B > C){
			printf("Case #%d: true\n", index);
		}
		else
			printf("Case #%d: false\n", index);

		index++;
	}

	return 0;
}
