#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
void drawHeart(int m, int n) {
	int i, j;
	for(i = 1; i < 7; i++) {
		for(j = 1; j <= 7; j++) {
			if(!((i == 1 && (j == 1 || j == 4 || j == 7))
			|| (i == 4 && (j == 1 || j == 7))
			|| (i == 5 && (j <= 2 || j >= 6))
			|| (i == 6 && (j <= 3 || j >= 5)))) {
				printf(" * ");
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int m = 6, n = 7,x;
	printf("(1) YEU\n");
	printf("(2) GHET\n");
	printf("nhap cam xuc: ");scanf("%d",&x);
    switch (x)
	{
		case 1:
		printf("Yeu Em\n");
        drawHeart(m,n);
		break;
		case 2:
		printf("Van Yeu Em\n");
		drawHeart(m,n);
		break;
		default:
		printf("\nkhong dung cam xuc bae");
		break;
	}
	getch();
	return 0;
}