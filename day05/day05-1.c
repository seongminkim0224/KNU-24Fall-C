#include <stdio.h>
int main()
{
	int i = 0;
	int scores[4];
	int sum = 0;
	double ave;

	for (int i = 0; i < 4; i++) {
		printf("성적 입력 %d:", i + 1);
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

	printf("최대값:%d\n최소값:%d\n평균:%lf", max, min, ave);


	return 0;
}