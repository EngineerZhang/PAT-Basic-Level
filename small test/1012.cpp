#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);

	int count[5] = { 0 };
	int ans[5] = { 0 };

	int flag = 1;
	for (int i = 0; i < N; i++){
		int tmp;
		scanf("%d", &tmp);

		if (tmp % 5 == 0){
			if (tmp % 2 == 0){
				ans[0] += tmp;
				count[0]++;
			}
		}
		else if (tmp % 5 == 1){
			ans[1] += flag * tmp;
			flag = -flag;
			count[1]++;
		}
		else if (tmp % 5 == 2){
			count[2]++;
		}
		else if (tmp % 5 == 3){
			ans[3] += tmp;
			count[3]++;
		}
		else if (tmp % 5 == 4){
			if (tmp > ans[4])
				ans[4] = tmp;
			count[4]++;
		}
	}


	if (count[0] == 0)	printf("N ");
	else printf("%d ", ans[0]);

	if (count[1] == 0)	printf("N ");
	else printf("%d ", ans[1]);

	if (count[2] == 0)	printf("N ");
	else printf("%d ", count[2]);

	if (count[3] == 0)	printf("N ");
	else printf("%.1f ", (double)ans[3] / count[3]);

	if (count[4] == 0)	printf("N");
	else printf("%d", ans[4]);
	return 0;
}
