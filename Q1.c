#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int regrression(int num, int dig);

void main() {
	int num =0, dig = 0;
	printf("enter numbers:\n");
	scanf("%d", &num);
	scanf("%d", &dig);

	int res = regrression(num, dig);
	printf("result is:%d", res);
}

int regrression(int num, int dig) {
	static int counter = 0;
	if (num == 0) {
		return 0;
	}
	if ((num % 10) % dig == 0) {
		counter++;
	}
	regrression((num / 10), dig);
	return counter;
}