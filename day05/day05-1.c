#include <stdio.h>
int main()
{
	int i = 0;
	int scores[4];
	int sum = 0;
	double ave;

	for (int i = 0; i < 4; i++) {
		printf("���� �Է� %d:", i + 1);
		scanf_s("%d", &scores[i]);
		sum += scores[i];
	}
	ave = (double)sum / 4;

	int max = scores[0];
	int min = scores[0];

	for (int i = 1; i < 4; i++) {
		if (scores[i] > max) {
			max = scores[i];
		}
	}

	if (scores[i] < min) {
		min = scores[i];
	}

	printf("�ִ밪:%d\n�ּҰ�:%d\n���:%lf", max, min, ave);


	return 0;
}