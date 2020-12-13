#include <stdio.h>
#include <math.h>
int KiemTraNguyenTo(int n)
{
	int i;
	if(n<2)
	return false;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
	}
	return true;
}
int DemNguyenTo(int a[], int n)
{
	int i, dem=0;
	for(i=0;i<n;i++)
	{
		if(KiemTraNguyenTo(a[i])==true)
		{
			dem+=1;
		}
	}
	return dem;
}
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
{
	printf("Nhap phan tu thu %d", i);
	scanf("%d", &a[i]);
}
}
main()
{
	int x[10], demSo;
	nhapMang(x,5);
	demSo=DemNguyenTo(x,5);
	printf("%d", demSo);
}
