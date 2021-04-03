#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("   %d   ", a[i]);
	}
}
int sapXep (int a[], int n)
{
	int tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int nhiPhan(int a[], int n, int x)
{
	int left=0, right=n-1, mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]==x)
		{
			return 1;
		}
		else
		{
			if(a[mid]<x)
			{
				left=mid+1;
			}
			else
			{
				right=mid-1;
			}
		}
	}
	return 0;
}
main()
{
	int a[20], x;
	nhapMang(a,16);
	sapXep(a,16);
	xuatMang(a,16);
	printf("\nNhap x: ");
	scanf("%d", &x);
	if(nhiPhan(a,16,x)==1)
	{
		printf("Tim thay");
	}
	else
	{
		printf("Khong tim thay");
	}
	
}
