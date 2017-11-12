#include<cstdio>
#include<algorithm>
using namespace std;

int Array[100010];
int Array1[100010];
int Max_Left[100010];
int Min_Right[100010];

int main(){
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &Array[i]);

	Max_Left[0] = Array[0];
	for (int i = 1; i < N; i++){
		Max_Left[i] = max(Max_Left[i - 1], Array[i]);
	}

	Min_Right[N - 1] = Array[N - 1];
	for (int i = N - 2; i >= 0; i--){
		Min_Right[i] = min(Min_Right[i + 1], Array[i]);
	}

	int index = 0;

	for (int i = 0; i < N; i++){
		if (Array[i] >= Max_Left[i] && Array[i] <= Min_Right[i])
			Array1[index++] = Array[i];
	}

	printf("%d\n", index);
	for (int i = 0; i < index; i++){
		printf("%d", Array1[i]);
		if (i != index-1)
			printf(" ");
	}
	
	printf("\n");
		
	return 0;
}
