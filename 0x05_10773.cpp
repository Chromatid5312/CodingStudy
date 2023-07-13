//백준 10773번
//순수 C언어

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100001
int main()
{
	int sum = 0;
	int memory[SIZE];
	*(memory) = 0;

	int count;
	scanf("%d", &count);

	int CNT = 0;
	int NM;

	for (int i = 0; i < count; i++) {
		scanf("%d", &NM);

		if (NM == 0) {
			sum -= *(memory + --CNT);
		}
		else {
			sum += NM;
			*(memory + CNT) = NM;
			CNT++;
		}
	}

	printf("%d", sum);
}