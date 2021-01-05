#include <stdio.h>
#include <math.h>
struct diem
{
	float x;
	float y;
};
typedef struct  diem DIEM;
struct tamGiac
{
	DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct tamGiac TAMGIAC;
void nhapDiem(DIEM &P)
{
	printf("\nNhap x: "); scanf("%f", &P.x);
	printf("\nNhap y: "); scanf("%f", &P.y);
}
void xuatDiem(DIEM P)
{
	printf("\n Diem x= %f", P.x);
	printf("\n Diem y= %f", P.y);
}
float khoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x-Q.x)*(P.x-Q.x)+(P.y-Q.y)*(P.y-Q.y));
}
void NhapTamGiac(TAMGIAC &x)
{
	printf("\nNhap toa do dinh thu nhat: ");
	nhapDiem(x.A);
	printf("\nNhap toa do diem thu hai: ");
	nhapDiem(x.B);
	printf("\nNhap toa do diem thu ba: ");
	nhapDiem(x.C);
}
void XuatTamGiac(TAMGIAC x)
{
	printf("\nToa do thu nhat= ");
	xuatDiem(x.A);
	printf("Toa do thu hai= ");
	xuatDiem(x.B);
	printf("Toa do thu ba= ");
	xuatDiem(x.C);
}
float TinhDienTich(TAMGIAC x)
{
	float a=khoangCach(x.B,x.C);
	float b=khoangCach(x.C,x.A);
	float c=khoangCach(x.A,x.B);
	float p=(a+b+c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
main()
{
    TAMGIAC t;
    NhapTamGiac(t);
    XuatTamGiac(t);
    float dt=TinhDienTich(t);
    printf("\n DIen tich tam giac la: %.3f", dt);
}
