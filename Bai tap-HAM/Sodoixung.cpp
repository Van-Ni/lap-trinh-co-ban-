#include <stdio.h>
int KiemTraDoiXung(int n)
{
	int m, soDoi=0;
	while(n>0)
	{
		m=n%10;
		soDoi=(soDoi*10)+m;
		n/=10;
	}
    return soDoi;
}
void InDoiXung(int n)
{
	if(KiemTraDoiXung(n)==n)
	printf("La so doi xung");
	else
	printf("Ko la so doi xung");
}
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	InDoiXung(n);
}

