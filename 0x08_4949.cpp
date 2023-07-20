//백준 4949번
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string sen;

	while (1) { //반복문 조건
		getline(cin, sen);  //공백을 포함한 문장 받기

		if (sen == ".")
			break;

		bool check = true;
		stack<char> gar; //괄호에 대한 스택

		for (auto i : sen) {
			switch (i)
			{
				case '(':
					gar.push(i);
					break;
				case '[':
					gar.push(i);
					break;
				case ')':
					if (gar.empty() || gar.top() != '(') check = false;
					else gar.pop();
					break;
				case ']':
					if (gar.empty() || gar.top() != '[') check = false;
					else gar.pop();
					break;
			}
		}

		if (!gar.empty()) check = false;

		if (check) cout << "yes" << '\n';
		else cout << "no\n";
	}
}
*/