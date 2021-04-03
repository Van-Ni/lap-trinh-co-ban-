#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int max2(int a[], int n)
{
	int max1, max2;
	if(a[0]>a[1])
	{
		max1=a[0];
		max2=a[1];
	}
	else
	{
		max1=a[1];
		max2=a[0];
	}
	for(int i=2;i<n;i++)
	{
		if(a[i]>=max1)
		{
			max2=max1;
			max1=a[i];
		}
		else // a[i]<max1
		{
			if(a[i]>max2)
			{
				max2=a[i];
			}
		}
	}
	return max2;
}
main()
{
	int a[10];
	nhapMang(a,5);
	printf("Phan tu lon thu nhi: %d", max2(a,5));
}

