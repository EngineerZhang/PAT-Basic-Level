#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	string h_name;
	string h_id;
	int h_grade;

	string l_name;
	string l_id;
	int l_grade;

	cin >> h_name >> h_id >> h_grade;

	l_name = h_name;
	l_id = h_id;
	l_grade = h_grade;

	for (int i = 1; i < n - 1; i++){
		string name, id;
		int grade;
		cin >> name >> id >> grade;

		if (grade < l_grade){
			l_name = name;
			l_id = id;
			l_grade = grade;
		}

		if (grade > h_grade){
			h_name = name;
			h_id = id;
			h_grade = grade;
		}
	}

	cout << h_name << " " << h_id << endl;
	cout << l_name << " " << l_id << endl;

	return 0;
}
