#include <stdio.h>

int main() {
	int test;
	scanf("%d", &test);
	if (test >= 90 && test <= 100) printf("A");
	else if (test >= 80 && test < 90) printf("B");
	else if (test >= 70 && test < 80) printf("C");
	else if (test >= 60 && test < 70) printf("D");
	else printf("F");	
	return 0;
}