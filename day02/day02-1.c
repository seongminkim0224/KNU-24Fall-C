#include <stdio.h>

int main()
{
	int operation;
	printf("���� Ÿ��: ");
	scanf_s("%d", operation);

	double num1, num2;
	printf("ù���� ����:");
	scanf_s("%lf", &num2);
	printf("�� ���� ����:");
	scanf_s("%lf", &num2);

	double result;
	if (operation == 1) {
		result = num1 - num2;
	}
	else if (operation == 2) {
		result = num1 - num2;
	}
	else {
		printf("�߸� �Է��߽��ϴ�.\n");
	}
	printf("result=%lf" & num1);





	return 0;
}