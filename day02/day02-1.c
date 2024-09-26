#include <stdio.h>
int main()
{
	int ope;
	printf("연산 타입:");
	scanf_s("%d", &ope);

	double num1, num2;
	printf("숫자 1을 입력하세요:");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하세요:");
	scanf_s("%lf", &num2);

	double result;
	result = 0;

	if (ope == 1) {
		result = num1 + num2;
	}
	else if (ope == 2) {
		result = num1 - num2;
	}
	else if (ope == 3) {
		result = num1 * num2;
	}
	else if (ope == 4) {
		result = num1 / num2;
	}
	else {
		printf("잘못 입력하셨습니다\n");
	}

	printf("%lf*%lf=%lf", num1, num2, result);



	return 0;
}