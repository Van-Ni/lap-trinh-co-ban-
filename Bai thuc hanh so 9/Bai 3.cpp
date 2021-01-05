#include <stdio.h>
struct TienDien
{
	int ChiSoCu, ChiSoMoi;
};
void NhapChiSo(struct TienDien &td)
{
	printf("Nhap chi so moi: ");
	scanf("%d", &td.ChiSoMoi);
	printf("Nhap chi so cu: ");
	scanf("%d", &td.ChiSoCu);
}
void InChiSo(struct TienDien td)
{
	printf("\nChi so moi: %d",td.ChiSoMoi);
	printf("\nChi so cu: %d", td.ChiSoCu);
}
int TinhTienDien(struct TienDien t)
{
    int tieuThu, tien;
	tieuThu=t.ChiSoMoi-t.ChiSoCu;
	if(tieuThu<100)
	{ 
	  tien=tieuThu*1000;
	}
	else
	{
		tien=100*1000+(tieuThu-100)*1500;
	}
	return tien;
}
main()
{
	struct TienDien x;
	NhapChiSo(x);
	printf("**********KET QUA**********");
	int td=TinhTienDien(x);
	printf("\nTien dien can phai nop: %d", td);
}


