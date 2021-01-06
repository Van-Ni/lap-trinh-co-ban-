#include <stdio.h>
struct HCN
{
	int a,b, S, P;
};
void NhapDoDai(struct HCN &h)
{
	printf("Nhap chieu dai: "); 
	scanf("%d", &h.a);
	printf("Nhap chieu rong: ");
	scanf("%d", &h.b);
}
void InDoDai(struct HCN h)
{
	printf("chieu dai HCN= %d", h.a);
	printf("CHieu rong HCN= %d", h.a);
}
int TinhS(struct HCN h)
{
	return h.a*h.b;
}
int TinhP(struct HCN h)
{
	return (h.a+h.b)*2;
}
main()
{
	int s, p;
	struct HCN c;
    NhapDoDai(c);
	s=TinhS(c);
	printf("Dien tich= %d", s);
	p=TinhP(c);
	printf("CHu vi= %d", p);
	InDoDai(c);
}
