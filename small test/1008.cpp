#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);

	int loose_1 = 0;
	int loose_2 = 0;
	while (N--){
		int x1, x2, y1, y2;
		scanf("%d%d%d%d", &x1, &x2, &y1, &y2);

		if (x1 + y1 == x2 && x1 + y1 != y2)
			loose_2++;
		if (x1 + y1 == y2 && x1 + y1 != x2)
			loose_1++;
	}

	printf("%d %d", loose_1, loose_2);
	return 0;
}
