#include <stdio.h>

int main(void)
{
	int count = 0;
	int Static_money;		// ���� ���
	int Dynamic_money;		// ���� ���
	int NoteBook_Price;		// NoteBook ���

	scanf("%d %d %d", &Static_money, &Dynamic_money, &NoteBook_Price);
	
	if (NoteBook_Price - Dynamic_money <= 0) printf("%d", -1);
	else printf("%d", Static_money / (NoteBook_Price - Dynamic_money) + 1);
	
	return 0;
}