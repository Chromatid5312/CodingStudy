//백준 3273번
//순수 C언어

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100001
#define SIZES 20000001

int arr[SIZES];

int main()
{
	int startnum;
	scanf("%d", &startnum);

	int num[SIZE];
	for (int i = 0; i < startnum; i++) {
		scanf("%d", (num + i));
	}

	int RS;
	scanf("%d", &RS);

	int number = 0;

	for (int i = 0; i < startnum; i++) {
		if (num[i] > RS)
			continue;
		else if (arr[RS - num[i]] == 1)
			number++;
		else
			arr[num[i]] = 1;
	}

	printf("%d", number);
}