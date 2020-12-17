#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d] ", i);
		scanf("%d", &a[i]);
	}
}
int DemSoLan(int a[], int n, int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			dem=dem+1;
		}
	}
	return dem;
}
main()
{
	int a[10], demX, x;
	nhapMang(a,5);
	printf("Nhap x: ");
	scanf("%d", &x);
	demX=DemSoLan(a,5,x);
	printf("xuat hien %d", demX);
}

