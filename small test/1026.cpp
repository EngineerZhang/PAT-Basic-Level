#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int C1, C2;
	scanf("%d%d", &C1, &C2);

	int CLK_TCK = 100;
	//double time = round((C2 - C1) / CLK_TCK);
	int time = (C2 - C1 + 50) / CLK_TCK;

	int hh = time / 3600;
	//int mm = (time - hh * 3600) / 60;
	int mm = time % 3600 / 60;
	int ss = time % 60;

	printf("%02d:%02d:%02d", hh, mm, ss);
	return 0;
}
