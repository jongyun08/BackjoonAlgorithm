#include <stdio.h>

int main() {
	int A, B, C, sum = 0;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	if ((B + C) >= 60) {
		if ((B + C) % 60 == 0) {
			sum = A + ((B + C) / 60);
			if (sum >= 23) {
				printf("%d %d\n", (sum % 24), 0);
			}
			else if (sum < 23) {
				sum = A + ((B + C) / 60);
				printf("%d %d\n", sum, 0);
			}
		}
		else if ((B + C) % 60 != 0) {
			sum = A + ((B + C) / 60);
			if (sum >= 23) {
				printf("%d %d\n", sum % 24, ((B + C) % 60));
			}
			else if (sum < 23) {
				printf("%d %d\n", sum, ((B + C) % 60));
			}
		}
	}
	else if ((B + C) < 60) 	printf("%d %d\n", A, B + C);
	return 0;
}