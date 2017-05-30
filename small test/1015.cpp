#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;


struct Stu{
	int id;
	int score_de;
	int score_cai;
	int sum;
	int type;
};
Stu stu[100010];

bool cmp(Stu s1, Stu s2){
	if (s1.type != s2.type)
		return s1.type < s2.type;
	else if (s1.sum != s2.sum)
		return s1.sum > s2.sum;
	else if (s1.score_de != s2.score_de)
		return s1.score_de > s2.score_de;
	else return s1.id < s2.id;
}

int main(){
	int N, L, H;
	scanf("%d %d %d", &N, &L, &H);

	int M = 0;
	for (int i = 0; i < N; i++){
		int id, score1, score2;
		scanf("%d %d %d", &id, &score1, &score2);
		if (score1 >= L && score2 >= L){
			stu[M].id = id;
			stu[M].score_de = score1;
			stu[M].score_cai = score2;
			stu[M].sum = score1 + score2;
			if (score1 >= H && score2 >= H)
				stu[M].type = 1;
			else if (score1 >= H && score2 < H)
				stu[M].type = 2;
			else if (score1 >= score2)
				stu[M].type = 3;
			else stu[M].type = 4;
			M++;
		}
	}

	sort(stu, stu + M, cmp);
	printf("%d\n", M);
	for (int i = 0; i < M; i++)
		printf("%d %d %d\n", stu[i].id, stu[i].score_de, stu[i].score_cai);
	return 0;
}
