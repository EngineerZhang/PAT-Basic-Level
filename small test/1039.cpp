#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int num[256] = { 0 };

int main(){
	string str1, str2;
	cin >> str1 >> str2;

	int len1 = str1.length();
	int len2 = str2.length();

	for (int i = 0; i < len1; i++){
		num[str1[i]]++;
	}

	int miss = 0;
	for (int i = 0; i < len2; i++){
		if (num[str2[i]] == 0)
			miss++;
		else
			num[str2[i]]--;
	}

	if (miss > 0)
		cout << "No " << miss << endl;
	else
		cout << "Yes " << len1 - len2 << endl;
	return 0;

}
