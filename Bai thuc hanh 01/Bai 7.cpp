#include <stdio.h>
#include <math.h>
main()
{
	int banKinh, chieuCao;
	float sxq, stp, v;
	printf("Nhap ban kinh va chieu cao: ");
	scanf("%d %d", &banKinh, &chieuCao);
	sxq = 2 * atan(1) * 4 * banKinh * chieuCao;
	stp = 2 * atan(1) * 4 * banKinh * (banKinh + chieuCao);
	v = atan(1) * 4 * banKinh * 2 * chieuCao;
	printf("Dien tich xung quanh: %6.2f", sxq);
	printf("Dien tich toan phan: %6.2f", stp);
	printf("The tich: %6.2f", v);	
}
