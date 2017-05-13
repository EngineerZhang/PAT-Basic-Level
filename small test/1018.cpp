#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);

	char x, y;
	int win_1, win_2, loose_1, loose_2, draw_1, draw_2;
	win_1 = win_2 = loose_1 = loose_2 = draw_1 = draw_2 = 0;

	int numB_1, numC_1, numJ_1, numB_2, numC_2, numJ_2;
	numB_1 = numC_1 = numJ_1 = numB_2 = numC_2 = numJ_2 = 0;

	while (N--){
		getchar();
		scanf("%c %c", &x, &y);
		//cin >> x >> y;
		if ((x == 'B' && y == 'C') || (x == 'C' && y == 'J') || (x == 'J' && y == 'B')){
			win_1++;
			loose_2++;
			if (x == 'B')
				numB_1++;
			else if (x == 'C')
				numC_1++;
			else
				numJ_1++;
		}
		else if ((y == 'B' && x == 'C') || (y == 'C' && x == 'J') || (y == 'J' && x == 'B')){
			win_2++;
			loose_1++;
			if (y == 'B')
				numB_2++;
			else if (y == 'C')
				numC_2++;
			else
				numJ_2++;
		}
		else{
			draw_1++;
			draw_2++;
		}
	}

	printf("%d %d %d\n", win_1, draw_1, loose_1);
	printf("%d %d %d\n", win_2, draw_2, loose_2);

	if (numB_1 >= numC_1){
		if (numB_1 >= numJ_1)
			printf("B ");
		else
			printf("J ");
	}
	else{
		if (numC_1 >= numJ_1)
			printf("C ");
		else
			printf("J ");
	}

	if (numB_2 >= numC_2){
		if (numB_2 >= numJ_2)
			printf("B");
		else
			printf("J");
	}
	else{
		if (numC_2 >= numJ_2)
			printf("C");
		else
			printf("J");
	}

	return 0;
}
