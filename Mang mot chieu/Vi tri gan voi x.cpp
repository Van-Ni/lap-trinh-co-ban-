#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int timMin(int a[], int n, int x)
{
	int vtMin=0, min;
	min=abs(a[0]-x);
	for(int i=1;i<n;i++)
	{
		if(abs(a[i]-x)<min)
		{
			min=abs(a[i]-x);
			vtMin=i;
		}
	}
	return vtMin;
}
main()
{
	int a[10], kq, x;
	nhapMang(a,5);
	printf("Nhap x: ");
	scanf("%d", &x);
	kq=timMin(a,5,x);
	printf("Gan voi vi tri x la: %d", kq);
}
