#include <stdio.h>
#define _USE_MATH_DEFINES
#include<math.h> // 정확한 원주율을 얻기 위하여 다음과 같은 코드를 추가한다.

int main()
{
	float angle;
	double distance, rad_of_E;

	printf("거리를 입력하시오: ");
	scanf_s("%lf", &distance);
	printf("각도를 입력하시오: ");
	scanf_s("%f", &angle);

	rad_of_E = ((distance * 360.0) / angle) / (2 * M_PI); // 부채꼴의 각도 : 두 지점 간의 거리 = 360도 : 지구의 둘레 길이(2 * PI * r)

	printf("지구의 반지름은 %lf", rad_of_E);

	return 0;
}