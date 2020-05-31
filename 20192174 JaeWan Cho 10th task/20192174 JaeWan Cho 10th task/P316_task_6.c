//#include <stdio.h>
//
//int main()
//{
//		int asmd, switch_case, num1, num2, result;
//
//	printf("*****************\n");
//	printf("A---- Add\n");
//	printf("S---- Subtract\n");
//	printf("M---- Multiply\n");
//	printf("D---- Divide\n");
//	printf("Q---- Quit\n");
//	printf("*****************\n");
//
//	do
//	{
//		printf("연산을 선택하시오: ");
//		asmd = getchar();
//		getchar(); // 입력버퍼를 비워주기 위해 추가한다.
//		switch (asmd)
//		{
//		case 65: // 문자 A
//		case 83: // 문자 S
//		case 77: // 문자 M
//		case 68: // 문자 D
//			switch_case = 0;
//			break;
//		case 81: // 문자 Q
//			return 0;
//		default: // 그 외의 문자들
//			switch_case = 1;
//			break;
//		}
//	} while (switch_case > 0 );
//
//	printf("두 수를 공백으로 분리하여 입력하시오: ");
//	scanf_s("%d %d", &num1, &num2);
//
//	if (asmd == 'A')
//		result = num1 + num2;
//	else if (asmd == 'S')
//		result = num1 - num2;
//	else if (asmd == 'M')
//		result = num1 * num2;
//	else if (asmd == 'D')
//		result = num1 / num2;
//
//	printf("%d", result);
//	return 0;
//}