//백준 10799번
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string mak; //막대

	cin >> mak; //공백없이 한 줄 입력

	stack<char> makde; //괄호를 저장할 스택

	int line = -1; //막대 판별 변수
	int count = 0; //막대 개수 변수

	for (auto i : mak) {
		switch (i)
		{
		case '(':
			makde.push(i);

			if (line < 0) line++;

			break;

		case ')':
			makde.pop();
			if (line == 0)
			{
				count += makde.size(); //바로 전의 문자가 '(' 였음
				line = -1;
			}
			else count++;

			break;
		}
	}

	cout << count;
}
*/

