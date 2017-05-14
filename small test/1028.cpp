#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int N; 
	scanf("%d", &N);

	
	char old_name[10];
	char you_name[10];

	int old_yy = 2014;
	int old_mm = 9;
	int old_dd = 6;
	int you_yy = 1814;
	int you_mm = 9;
	int you_dd = 6;

	int count = 0;
	for (int i = 0; i < N; i++){
		char name[10];
		int yy, mm, dd;
		scanf("%s %d/%d/%d", &name, &yy, &mm, &dd);

		if  ((yy < 2014 || (yy == 2014 && mm < 9) || (yy == 2014 && mm == 9 && dd <= 6)) &&
			(yy > 1814 || (yy == 1814 && mm > 9) || (yy == 1814 && mm == 9 && dd >= 6))){
			count++;

			if (yy < old_yy || (yy == old_yy && mm < old_mm) || (yy == old_yy && mm == old_mm && dd <= old_dd)){
				old_yy = yy;
				old_mm = mm;
				old_dd = dd;
				strcpy(old_name, name);
			}

			if (yy > you_yy || (yy == you_yy && mm > you_mm) || (yy == you_yy && mm == you_mm && dd >= you_dd)){
				you_yy = yy;
				you_mm = mm;
				you_dd = dd;
				strcpy(you_name, name);
			}
		}
	}

	printf("%d", count);
	if (count != 0)
		printf(" %s %s", old_name, you_name);
	return 0;
}
