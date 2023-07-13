//C++, STL 풀이
//백준 10808번
/*
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

vector<int> alphabet(27); // 알파벳 개수 저장 배열

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	
	char letter; //입력 받을 단어
	while ((letter = getchar()) != '\n') {
		alphabet[122 - int(letter)]++;
	}

	for (auto i = 25; i >= 0; i--) {
		cout << alphabet[i] << " ";
	}
}
*/

