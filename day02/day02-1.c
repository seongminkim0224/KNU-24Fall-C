#include <stdio.h>
int main()
{
	int ope;
	printf("���� Ÿ��:");
	scanf_s("%d", &ope);

	double num1, num2;
	printf("���� 1�� �Է��ϼ���:");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��ϼ���:");
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
		printf("�߸� �Է��ϼ̽��ϴ�\n");
	}

	printf("%lf*%lf=%lf", num1, num2, result);



	return 0;
}