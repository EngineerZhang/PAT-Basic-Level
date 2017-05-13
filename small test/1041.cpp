#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

struct student{
	string id;
	int pos1;
	int pos2;
};
student stu[1010];


int main(){
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		cin >> stu[i].id >> stu[i].pos1 >> stu[i].pos2;
	}

	int M;
	scanf("%d", &M);

	for (int i = 0; i < M; i++){
		int f_pos;
		scanf("%d", &f_pos);

		for (int j = 0; j < N; j++){
			if (stu[j].pos1 == f_pos)
				cout << stu[j].id << " " << stu[j].pos2 << endl;
		}
	}

	return 0;
}
