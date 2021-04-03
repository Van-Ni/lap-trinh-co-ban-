#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<=n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void InsertionSort(int a[], int n)
{
	int pos, x;
	for(int i=0;i<n;i++)
	{
		x=a[i+1];
		pos=i;
		while(pos>=0&&a[pos]>x)
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
void xuatMang(int a[], int n)
{
	for(int i=0;i<=n;i++)
	{
		printf(" %d ", a[i]);
	}
}
main()
{
	int a[10];
	nhapMang(a,5);
	InsertionSort(a,5);
	xuatMang(a,5);
}
