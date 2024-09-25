#include <stdio.h>

int main()
{
	int operation;
	printf("연산 타입: ");
	scanf_s("%d", operation);

	double num1, num2;
	printf("첫번쨰 숫자:");
	scanf_s("%lf", &num2);
	printf("두 번쨰 숫자:");
	scanf_s("%lf", &num2);

	double result;
	if (operation == 1) {
		result = num1 - num2;
	}
	else if (operation == 2) {
		result = num1 - num2;
	}
	else {
		printf("잘못 입력했습니다.\n");
	}
	printf("result=%lf" & num1);





	return 0;
}