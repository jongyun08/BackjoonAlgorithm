#include <stdio.h>

int main() {
	int H, M; //0<=H<=23, 0<=M<=59
	scanf("%d %d", &H, &M);
	if (H > 0 && M < 45) printf("%d %d",(H-1), (60-45+M));
	else if (H > 0 && M >= 45) printf("%d %d",H ,M-45);
	else if (H == 0 && M >= 45) printf("%d %d",H ,M-45);
	else if (H == 0 &&  M < 45) printf("%d %d",23, (60-45+M));
	return 0;
}