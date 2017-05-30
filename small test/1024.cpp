#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	string A;
	cin >> A;

	if (A[0] == '-')	cout << "-";

	int pos_E = A.find('E');
	int num = 0;
	for (int i = pos_E + 2; i < A.length(); i++){
		num = num * 10 + (A[i] - '0');
	}

	if (A[pos_E + 1] == '-'){
		if (num == 0){
			for (int i = 1; i < pos_E; i++)
				cout << A[i];
		}
		else{
			cout << "0.";
			for (int i = 0; i < num - 1; i++)
				cout << "0";
			for (int i = 1; i < pos_E; i++){
				if (A[i] != '.')
					cout << A[i];
			}
		}
	}

	if (A[pos_E + 1] == '+'){
		if (num == 0){
			for (int i = 1; i < pos_E; i++)
				cout << A[i];
		}
		else{
			for (int i = 1; i < pos_E; i++){
				if (A[i] != '.'){
					if (i > 2){
						num--;
					}
					cout << A[i];
					if (num == 0 && i < pos_E - 1)
						cout << '.';
				}
			}
			while (num-- > 0)
				cout << "0";

		}
	}

	return 0;
}
