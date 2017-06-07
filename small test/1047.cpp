#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int team[1010] = { 0 };

int main(){
	int N;
	scanf("%d", &N);

	int team_id, member_id, score;
	for (int i = 0; i < N; i++){
		scanf("%d-%d %d", &team_id, &member_id, &score);
		team[team_id] += score;
	}

	int max_id = 1;
	int max_score = team[1];
	for (int i = 2; i <= 1000; i++){
		if (team[i]>max_score){
			max_score = team[i];
			max_id = i;
		}
	}

	printf("%d %d", max_id, max_score);
	return 0;
}
