#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int num_P[100010];
int num_T[100010];

int main(){
	string str;
	cin >> str;

	int len = str.length();
	int sum = 0;

	for (int i = 0; i < len; i++){
		if (str[i] == 'P'){
			if (i != 0)
				num_P[i] = num_P[i - 1] + 1;
			else
				num_P[i]++;
		}
		else
			num_P[i] = num_P[i - 1];
	}

	for (int i = len - 1; i >= 0; i--){
		if (str[i] == 'T'){
			if (i != len - 1)
				num_T[i] = num_T[i + 1] + 1;
			else
				num_T[i]++;
		}
		else
			num_T[i] = num_T[i + 1];

		if (str[i] == 'A'){
			sum = (sum + num_P[i] * num_T[i]) % 1000000007;
		}
	}

	cout << sum << endl;
	return 0;
}
