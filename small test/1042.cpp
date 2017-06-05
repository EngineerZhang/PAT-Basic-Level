#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int num[24] = { 0 };

int main(){
	string s;
	getline(cin,s);

	int len = s.length();
	for (int i = 0; i < len; i++){
		if (s[i] >= 'a'&&s[i] <= 'z')
			num[s[i] - 'a']++;
		if (s[i] >= 'A'&&s[i] <= 'Z')
			num[s[i] - 'A']++;
	}

	int max_size = 0;
	char max_letter = 'a';
	for (int i = 0; i < 24; i++){
		if (num[i]>max_size){
			max_size = num[i];
			max_letter = 'a' + i;
		}
	}
	cout << max_letter << " " << max_size << endl;
	return 0;
}
