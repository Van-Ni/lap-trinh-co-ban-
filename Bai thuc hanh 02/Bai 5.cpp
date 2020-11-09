#include <stdio.h>
main()
{
	float chuyenCan, quaTrinh, cuoiKy, diem;
	printf("Nhap vao diem chuyen can, qua trinh, cuoi ky: ");
	scanf("%f %f %f", &chuyenCan, &quaTrinh, &cuoiKy);
	diem = (chuyenCan*0.1)+(quaTrinh*0.4)+(cuoiKy*0.5);
	if(diem>=4.0)
	{
		printf("Dat mon hoc");
	}
	else
	printf("Khong dat mon hoc");	
}
