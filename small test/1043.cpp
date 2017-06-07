#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int map[6] = { 0 };
char PAT[6] = { 'P', 'A', 'T', 'e', 's', 't' };

int main(){
	string s;
	cin >> s;

	int len = s.length();
	int num = 0;
	for (int i = 0; i < len; i++){
		switch (s[i]){
		case 'P':	map[0]++;	num++;	 break;
		case 'A':	map[1]++;	num++;	 break;
		case 'T':	map[2]++;	num++;	 break;
		case 'e':	map[3]++;	num++;	 break;
		case 's':	map[4]++;	num++;	 break;
		case 't':	map[5]++;	num++;	 break;
		}
	}

	while (num>0){
		for (int i = 0; i < 6; i++){
			if (map[i]>0){
				cout << PAT[i];
				map[i]--;
				num--;
			}
		}
	}
	return 0;
}
