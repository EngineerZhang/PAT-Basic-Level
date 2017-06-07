#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

struct MoonCake{
	double stock;
	double money;
	double avg_money;
};
MoonCake moon[1010];

bool cmp(MoonCake m1, MoonCake m2){
	return m1.avg_money > m2.avg_money;
}

int main(){
	int N, D;
	scanf("%d %d", &N, &D);

	for (int i = 0; i < N; i++){
		scanf("%lf", &moon[i].stock);
	}

	for (int i = 0; i < N; i++){
		scanf("%lf", &moon[i].money);
		moon[i].avg_money = moon[i].money / moon[i].stock;
	}

	sort(moon, moon + N, cmp);

	double profit = 0;
	for (int i = 0; i < N; i++){
		if (D > moon[i].stock){
			D -= moon[i].stock;
			profit += moon[i].money;
		}
		else{
			profit += moon[i].avg_money*D;
			break;
		}
	}

	printf("%.2lf", profit);
	return 0;
}
