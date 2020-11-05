#include <stdio.h>
#include <math.h>
main()
{
	float a, b, c, s, cv, p;
	printf("Nhap do dai 3 canh: ");
	scanf("%f %f %f", &a, &b, &c);
	cv = (a+b+c)/2;
	p = cv/2;
	printf("Chu vi la: %f", cv);
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich la: %f", s);	
}
