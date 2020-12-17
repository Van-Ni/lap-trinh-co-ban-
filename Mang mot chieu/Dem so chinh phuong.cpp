#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d] ", i);
		scanf("%d", &a[i]);
	}
}
int KiemTraChinhPhuong(int n)
{
	int m;
	m=(int) sqrt(n);
	if(m*m==n)
	return true;
	else
	return false;
}
int DemSoChinhPhuong(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
	    if(KiemTraChinhPhuong(a[i])==true)
	    {
	    	dem=dem+1;
		}
	}
	return dem;
}
main()
{
	int a[10], demSo;
	nhapMang(a,5);
	demSo=DemSoChinhPhuong(a,5);
	printf("Trong mang co %d so chinh phuong", demSo);
}
