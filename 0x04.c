/*
//백준 1406번
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 600001

void Del(char* STR, int length, int);
void PLS(char* STR,int, int);

int main()
{
	char STR[SIZE];
	scanf("%s", STR);

	int count;
	scanf("%d ", &count);

	int length = strlen(STR) - 1;
	int LTH = strlen(STR);

	char Ord[10];

	for (int i = 0; i < count; i++) {
		gets(Ord);

		if (strcmp(Ord, "L") == 0 && length != -1)
			length--;
		else if (strcmp(Ord, "D") == 0 && length != LTH - 1)
			length++;
		else if (strcmp(Ord, "B") == 0 && length != -1) {
			Del(STR, length, LTH);
			if (length != -1) {
				length--;
				LTH--;
			}
		}
		else if (strcmp(Ord, "P") > 0) {
			LTH++;
			PLS(STR, length, LTH);
			STR[length + 1] = Ord[2];
			length++;
		}
	}

	printf("%s", STR);
}

void Del(char* STR, int length, int LTH) {
	if (length != LTH)
	{
		*(STR + length) = *(STR + length + 1);

		Del(STR, length + 1, LTH);
	}
	else
		return;
}

void PLS(char* STR, int length, int LTH) {
	if (LTH != length)
	{
		*(STR + LTH) = *(STR + LTH - 1);

		PLS(STR, length, LTH - 1);
	}
	else
		return;
}
*/
/*
//백준 1406번

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 500000
int DL[SIZE];
int IS[SIZE];

int main()
{
	char S[SIZE], LS;

	char Lan[SIZE][100];

	int Cm;

	scanf("%s", S);
	scanf("%d", &Cm);

	char L;
	int SZ = strlen(S) - 1;

	for (int i = 0; i < Cm; i++) {
		scanf("%c ", &L);

		switch (L)
		{
		case 'L':
			if (SZ != -1)
				SZ--;
			break;

		case 'D':
			if (SZ != strlen(S) - 1)
				SZ++;
			break;

		case 'B':
			if (SZ != -1)
				DL[SZ]++;

			break;

		case 'P':
			scanf(" %c ", &LS);

			IS[SZ + 1]++;

			break;
		}
	}
}
*/
/*
//백준 1406번
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 300001

void Del(char* STR, int length, int);
void PLS(char* STR, int, int);

int main()
{
	char STR[SIZE];
	scanf("%s", STR);

	int count;
	scanf("%d ", &count);

	int length = strlen(STR) - 1;
	int LTH = strlen(STR);

	char Ord[10];

	for (int i = 0; i < count; i++) {
		gets(Ord);

		if (strcmp(Ord, "L") == 0 && length != -1)
			length--;
		else if (strcmp(Ord, "D") == 0 && length != LTH - 1)
			length++;
		else if (strcmp(Ord, "B") == 0 && length != -1) {
			Del(STR, length, LTH);
			if (length != -1) {
				length--;
				LTH--;
			}
		}
		else if (strcmp(Ord, "P") > 0) {
			LTH++;
			PLS(STR, length, LTH);
			STR[length + 1] = Ord[2];
			length++;
		}
	}

	printf("%s", STR);
}

void Del(char* STR, int length, int LTH) {
	if (length != LTH)
	{
		*(STR + length) = *(STR + length + 1);

		Del(STR, length + 1, LTH);
	}
	else
		return;
}

void PLS(char* STR, int length, int LTH) {
	if (LTH != length)
	{
		*(STR + LTH) = *(STR + LTH - 1);

		PLS(STR, length, LTH - 1);
	}
	else
		return;
}
*/
