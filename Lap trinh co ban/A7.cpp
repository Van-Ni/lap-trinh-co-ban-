#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ",i);
		scanf("%d", &a[i]);
	}
}
int check(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			dem++;
		}
	}
	return dem;
	if(dem>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
main()
{
	int a[10];
	nhapMang(a,5);
	if(check(a,5)==1)
	{
		printf("Trong mang  co phan tu xuat hien nhieu lan");
	}
	else
	{
		printf("Trong mang ko co  phan tu xuat hien nhieu lan");
	}
}
