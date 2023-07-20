//백준 3986번
/*
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin >> num; //단어의 수 N

	string AB; //단어

	int count = 0;

	while (num--) {
		stack<char> N; //각 단어를 저장할 스택

		cin >> AB; //단어 입력

		for (auto i : AB) {
			if (!N.empty() && N.top() == i) N.pop(); //만약 N이 비어있지 않으면서, N의 앞의 단어와 i가 같다면 내보내기
			else N.push(i); //그게 아니라면 추가하기
		}

		if (N.empty()) count++; //만약 스택이 비어있다면 1 추가
	}

	cout << count;
}
*/
