#include <stdio.h>
int main()
{
	int arr[3] = { 1,2,3 };

	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(arr + 1));
		printf("%d\n", arr[i]);
	}
	return 0;
}