#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	int hunderds, tens, ges;
	hunderds = n / 100;
	tens = n % 100 / 10;
	ges = n % 10;

	for (int i = 0; i < hunderds; i++)
		printf("B");
	for (int i = 0; i < tens; i++)
		printf("S");
	for (int i = 1; i <= ges; i++)
		printf("%d",i);

	return 0;
}
