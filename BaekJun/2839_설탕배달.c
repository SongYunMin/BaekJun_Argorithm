//#include <stdio.h>
//
//int main(void)
//{
//	int sugar;
//	int count_3 = 0;
//	int count_5 = 0;
//
//	scanf("%d", &sugar);
//
//	while (sugar >= 3 && sugar != 0) {
//		if ((sugar % 5) >= 3 && sugar != 4) {
//			count_5++;
//			sugar -= 5;
//		}
//		else {
//			count_3++;
//			sugar -= 3;
//		}
//	}
//
//	printf("%d", count_3 + count_5);
//
//	return 0;
//}