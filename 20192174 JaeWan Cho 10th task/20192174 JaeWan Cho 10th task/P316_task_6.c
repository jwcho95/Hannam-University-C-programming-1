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
//		printf("������ �����Ͻÿ�: ");
//		asmd = getchar();
//		getchar(); // �Է¹��۸� ����ֱ� ���� �߰��Ѵ�.
//		switch (asmd)
//		{
//		case 65: // ���� A
//		case 83: // ���� S
//		case 77: // ���� M
//		case 68: // ���� D
//			switch_case = 0;
//			break;
//		case 81: // ���� Q
//			return 0;
//		default: // �� ���� ���ڵ�
//			switch_case = 1;
//			break;
//		}
//	} while (switch_case > 0 );
//
//	printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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