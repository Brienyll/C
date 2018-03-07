#include<stdio.h>

void rect(int *area, int *per, int len, int wid);

int main() {

	int len, wid, area, per;

	printf("\nEnter the Length of Rectangle : ");
	scanf_s("%d", &len);

	printf("\nEnter the Width of Rectangle : ");
	scanf_s("%d", &wid);

	rect(&area, &per, len, wid);

	printf("\nArea of Rectangle : %d", area);
	printf("\nPerimeter of Rectangle : %d\n", per);

	system("pause");
}
void rect(int *area, int *per, int len, int wid) {
	*area = len * wid;
	*per = len * 2 + wid * 2;
}
