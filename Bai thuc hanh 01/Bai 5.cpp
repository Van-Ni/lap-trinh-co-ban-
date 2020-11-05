#include <stdio.h>
main()
{
	int a, b;
	float ketQua;
	printf("Nhap gia tri he so a, b: ");
	scanf("%d %d", &a, &b);
	ketQua = -b / a;
	printf("Nghiem phuong trinh: %1.5f", ketQua);	
}
