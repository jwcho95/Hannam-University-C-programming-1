//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int get_dice_face(void);
//int dice_count; // 주사위를 던진 횟수를 저장해주는 전역 변수
//
//int main(void)
//{
//	static int one_dice, two_dice, three_dice, four_dice, five_dice, six_dice; // 각 면이 나온 횟수를 저장해주는 정적 지역 변수
//	srand((unsigned)time(NULL));
//	while (1)
//	{
//		if (dice_count == 100)
//		{
//			printf("1-> %d\n", one_dice);
//			printf("2-> %d\n", two_dice);
//			printf("3-> %d\n", three_dice);
//			printf("4-> %d\n", four_dice);
//			printf("5-> %d\n", five_dice);
//			printf("6-> %d\n", six_dice);
//			break;
//		}
//		else
//		{
//			switch (get_dice_face()) // 주사위 던지기
//			{
//			case 1:
//				one_dice++;
//				break;
//			case 2:
//				two_dice++;
//				break;
//			case 3:
//				three_dice++;
//				break;
//			case 4:
//				four_dice++;
//				break;
//			case 5:
//				five_dice++;
//				break;
//			default:
//				six_dice++;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}
//
//int get_dice_face(void) // 주사위를 돌리는 함수
//{
//	int dice_result;
//
//	dice_count++;
//	dice_result = (rand() % 6) + 1;
//
//	return dice_result;
//}