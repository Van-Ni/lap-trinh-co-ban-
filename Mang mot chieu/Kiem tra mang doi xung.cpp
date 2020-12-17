#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d] ", i);
		scanf("%d", &a[i]);
	}
}
int KiemTraDoiXung(int a[], int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			return false;
		}
	}
	return true;
}
main()
{
	int a[10];
	nhapMang(a,5);
	if(KiemTraDoiXung(a,5)==true)
	{
		printf("Mang doi xung");
	}
	else
	{
		printf("Mang khong doi xung");
	}
}
