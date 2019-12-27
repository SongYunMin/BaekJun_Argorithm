#include <stdio.h>

int main(void)
{
	int count = 0;
	int Static_money;		// 고정 비용
	int Dynamic_money;		// 가변 비용
	int NoteBook_Price;		// NoteBook 비용

	scanf("%d %d %d", &Static_money, &Dynamic_money, &NoteBook_Price);
	
	if (NoteBook_Price - Dynamic_money <= 0) printf("%d", -1);
	else printf("%d", Static_money / (NoteBook_Price - Dynamic_money) + 1);
	
	return 0;
}