#include <stdio.h>
#define _USE_MATH_DEFINES
#include<math.h> // ��Ȯ�� �������� ��� ���Ͽ� ������ ���� �ڵ带 �߰��Ѵ�.

int main()
{
	float angle;
	double distance, rad_of_E;

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &distance);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%f", &angle);

	rad_of_E = ((distance * 360.0) / angle) / (2 * M_PI); // ��ä���� ���� : �� ���� ���� �Ÿ� = 360�� : ������ �ѷ� ����(2 * PI * r)

	printf("������ �������� %lf", rad_of_E);

	return 0;
}