#include<stdio.h>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int P_Cal, P_Sic, P_Knu;
	int A_Cal, A_Sic, A_Knu;

	scanf("%d.%d.%d %d.%d.%d", &P_Cal, &P_Sic, &P_Knu, &A_Cal, &A_Sic, &A_Knu);

	int sum1 = P_Cal * 17 * 29 + P_Sic * 29 + P_Knu;
	int sum2 = A_Cal * 17 * 29 + A_Sic * 29 + A_Knu;

	if (sum1 > sum2){
		printf("-");
	}

	int Cal, Sic, Knu;
	int tmp = abs(sum1 - sum2);
	Cal = tmp / 17 / 29;
	Sic = (tmp % (17 * 29)) / 29;
	Knu = tmp % 29;
	printf("%d.%d.%d", Cal, Sic, Knu);

	return 0;
}
