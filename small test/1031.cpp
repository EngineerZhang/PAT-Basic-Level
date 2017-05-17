#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
char Z[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };

int main(){
	int N;
	cin >> N;

	int num = 0;
	while (N--){
		string str;
		cin >> str;

		int sum = 0;
		int flag = 0;
		for (int i = 0; i < 17; i++){
			if (str[i] >'9' || str[i] < '0'){
				flag++;
				break;
			}

			sum = sum + (str[i] - '0') * weight[i];
		}

		int result = sum % 11;
		if (str[17] != Z[result] || flag == 1){
			cout << str << endl;
			num++;
		}

	}

	if (num == 0)
		cout << "All passed" << endl;

	return 0;
}
