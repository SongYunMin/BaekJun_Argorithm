#include <stdio.h>

int main(void)
{
	int count = 0 , temp = 0;			
	int Static_money;		// ���� ���
	int Dynamic_money;		// ���� ���
	int NoteBook_Price;		// ��Ʈ�� ���

	scanf("%d %d %d", &Static_money, &Dynamic_money, &NoteBook_Price);
	
	while (temp <= (Static_money + Dynamic_money))
	{
		//dasdsad
		temp += NoteBook_Price;
		count++;
	}

	printf("%d", count);



	return 0;
}