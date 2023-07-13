/*
//น้มุ 2164น๘
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	queue<int> k;
	queue<int> k0;
	k0.push(1);
	for (int i = 1; i <= N; i++)
		k.push(i);

	while (k.size() != k0.size()) {
		k.pop();
		
		k.push(k.front());
		k.pop();
	}

	cout << k.front();
}
*/

