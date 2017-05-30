#include<stdio.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int map[128] = { 0 };

int main(){
	char str1[85];
	char str2[85];
	scanf("%s %s", str1, str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i < len2; i++){
		map[str2[i]] = 1;
	}

	for (int i = 0; i < len1; i++){
		if (map[str1[i]] == 0){
			if (str1[i] >= 'a'&&str1[i] <= 'z'){
				map[str1[i]] = -1;
				map[str1[i]-32] = -1;
				printf("%c", str1[i]-32);
			}
			else{
				if (str1[i] >= 'A'&&str1[i] <= 'Z'){
					map[str1[i]] = -1;
					map[str1[i]+32] = -1;
					printf("%c", str1[i]);
				}
				else{
					map[str1[i]] = -1;
					printf("%c", str1[i]);
				}
			}
		}
	}
	return 0;
}
